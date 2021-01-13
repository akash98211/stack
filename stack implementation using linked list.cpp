#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node* next;
}Node;

Node *head=NULL;
int size=0;
//function of push 
void push(int data)
{
    Node *newnode=(Node*)malloc(sizeof(Node));
    if(!newnode)
    cout<<"heap size overflow\n";
    
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    size++;
}

int isEmpty()
{
    return head==NULL;
}

int peek()
{
    if(isEmpty())
    {cout<<"stack is empty\n";
    return -1;}
    
    return head->data;
    
}

int pop(){
    Node *temp;
    if(head==NULL)
    {
        cout<<"stack is underflow\n";
        return -1;
    }
    int ele=head->data;
    temp=head;
    head=head->next;
    size--;
    free(temp);
    return ele;
    }
    
    
int sizefunction()
{
    return size;
}
int main(){
    int n;cin>>n;
    for (int i = 0; i < n; i++) {
        int ele;cin>>ele;
        push(ele);
    }
    cout<<" Top of the stack :"<<peek()<<"\n";
    cout<<"size of the stack:"<<sizefunction()<<endl;
    cout<<"popping all the element \n";
    for (int i = 0; i < n; i++) {
        cout<<pop()<<endl;
    }
    return 0;
}