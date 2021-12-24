/*-------------------- In The Name Of Allah --------------------------------

-------------------- Performer : Md Mossadek Touhid -----------------------*/


#include <bits/stdc++.h>
using namespace std;
///--------------------------------Chapter 6----------------------------------///

///----------------------------------Stacks Via Array------------------------///
/*
#define MAXSTK 5
class stacks
{
private:
    int stack[MAXSTK];
    int top=0;
public:
    void push()
    {

        if(top==MAXSTK)
        {
            cout<<"OVERFLOW"<<endl<<endl;
        }
        else
        {
        int item;
            cout<<"\nEnter stack item: ";
            cin>>item;
            top=top+1;
            stack[top]=item;
            cout<<item<<" is pushed."<<endl<<endl;
        }
    }
    void peek()  ///top
    {
        cout<<stack[top]<<endl<<endl;
    }
    void pop()
    {

        if(top==0)
        {
            cout<<"UNDERFLOW"<<endl<<endl;
        }
        else
        {
        int item;
            item=stack[top];
            top=top-1;
            cout<<item<<" is popped."<<endl<<endl;
        }
    }
    bool isFull()
    {
        return top==MAXSTK;
    }
    bool isEmpty()
    {
        return top==0;
    }
    void getSize()
    {
        cout<<"Stack size: "<<top<<endl<<endl;
    }
    void pip() ///like Traversal
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            for(int i=top; i>=1; i--)
            {
                cout<<stack[i]<<" ";
            }
        }
        cout<<endl<<endl;
    }

};

int main()
{
    stacks s;
    while(1)
    {
        int choice;
        cout<<"Press 1 for push, 2 for top/peek, 3 for pop, 4 for size, 5 for pip, 6 for exit: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.peek();
            break;
        case 3:
            s.pop();
            break;
        case 4:
            s.getSize();
            break;
        case 5:
            s.pip();
            break;
        case 6:
            exit(1);
        default:
            cout<<"Invalid Choice."<<endl;
        }
    }
    return 0;
}
*/
