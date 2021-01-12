#include<bits/stdc++.h>
using namespace std;

typedef struct stack
{
    int capacity;
    int top;
    int *arr;
}stacks;

stacks* intializestack(int capacity)
{
    stacks *st=(stacks*)malloc(sizeof(stacks));
    st->capacity=capacity;
    st->top=-1;
    st->arr=(int*)malloc(sizeof(int)*capacity);
    return st;
}

int size(stacks *st)
{
    return st->top+1;
}

int isEmpty(stacks *st)
{
    return(st->top==-1);
}

int isFull(stacks *st)
{
    return st->top+1==st->capacity;
}


void push(stacks *st,int data)
{
    if(isFull(st))
    {cout<<"overflow\n";
    return;
    }
    
    st->top=st->top+1;
    st->arr[st->top]=data;
}

int peek(stacks *st)
{
    if(isEmpty(st))
    {cout<<"stack is empty\n";
    return -1;
    }
    
    return st->arr[st->top];
}

int pop(stacks *st)
{
    if(isEmpty(st))
    {
        cout<<"stack is empty\n";
        return -1;
    }
    
    int ele=st->arr[st->top];
    st->top=st->top-1;
    return ele;
}

int main(){
    int capacity,n;
    cin>>capacity>>n;
    stacks *st=intializestack(capacity);
    
    for (int i = 0; i < n; i++) {
        int ele;cin>>ele;
        push(st,ele);
    }
    
    cout<<"top of stack ="<<peek(st)<<endl;
    cout<<"size of stack ="<<size(st)<<endl;
    
    if(isEmpty(st))
    cout<<"stack is empty\n";
    
    else
    cout<<"stack is not empty\n";
    
    for (int i = 0; i < n; i++) {
        cout<<pop(st)<<" \n";
    }
    return 0;
}