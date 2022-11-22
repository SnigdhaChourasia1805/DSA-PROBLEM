#include<iostream>
using namespace std;

#define N 5
int stack[N];
int top=-1;

void push()
{
    int x;
    cout<<"enter data"<<endl;
    cin>>x;
    if(top==N-1)
    {
        cout<<"Overflow";
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int item;
    if(top==-1)
    {
    cout<<"Underflow";
    }
    else
    {
        item=stack[top];
        top--;
    }
    cout<<item;
}

void peek()
{
    if(top==-1)
    {
        cout<<"Stack is empty";
    }
    else
    {
        cout<<stack[top];
    }
}

void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        cout<<stack[i];
    }
}

int main()
{
    int ch;
   
    do
    {cout<<"1 for push ,2) for pop ,3) for peek value,4) for display";
        cout<<"Enter choice for operation: ";
        cin>>ch;
        
        switch(ch)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            default:
            cout<<"Invalid choice";
        }
    }while(ch!=0);
   
}
