#include<iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

void push(int x)
{
    if(top == MAX-1)
        cout<<"Stack Overflow\n";
    else
    {
        top++;
        stack[top] = x;
        cout<<"Inserted "<<x<<endl;
    }
}

void pop()
{
    if(top == -1)
        cout<<"Stack Underflow\n";
    else
    {
        cout<<"Deleted "<<stack[top]<<endl;
        top--;
    }
}

void peek()
{
    if(top == -1)
        cout<<"Stack is empty\n";
    else
        cout<<"Top element is "<<stack[top]<<endl;
}

// Display stack
void display()
{
    if(top == -1)
        cout<<"Stack is empty\n";
    else
    {
        cout<<"Stack elements: ";
        for(int i=top;i>=0;i--)
            cout<<stack[i]<<" ";
        cout<<endl;
    }
}

int main()
{
    int ch, x;

    do{
        cout<<"\n1. Push";
        cout<<"\n2. Pop";
        cout<<"\n3. Peek";
        cout<<"\n4. Display";
        cout<<"\n5. Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter element: ";
                cin>>x;
                push(x);
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

            case 5:
                cout<<"Exit";
                break;

            default:
                cout<<"Wrong choice";
        }
    }while(ch!=5);

    return 0;
}
