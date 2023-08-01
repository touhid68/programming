/*-------------------- In The Name Of Allah --------------------------------

-------------------- Performer : Md Mossadek Touhid -----------------------*/


#include <bits/stdc++.h>
using namespace std;
///--------------------------------Queues--------------------------------------///
/*
#define MAXQ 5
class queues
{
private:
    int queue[MAXQ];
    int front=0; // front=-1 then after insertion front=0
    int rear=0; // rear=-1  after insertion it will increses.
public:
    void insert()
    {
        if(front=1 && rear==MAXQ)    /// 1        2      3      4    5
        {
            ///front(constant 1) when deleted,it is increased
            cout<<"OVERFLOW"<<endl<<endl;  ///rear  rear->->-> ->          ->
        }
        else
        {
            int item;
            cout<<"Enter queue item: ";
            cin>>item;
            if(front==0)   ///Queue initially empty
            {
                front=1;
                rear=rear+1;
            }
            else
            {
                rear=rear+1;
            }
            queue[rear]=item;
            cout<<item<<" is inserted."<<endl<<endl;
        }
    }
    void peek()
    {
        cout<<queue[front]<<endl<<endl;
    }

    void deletion()
    {
        if(front==0)
        {
            cout<<"UNDERFLOW"<<endl<<endl;
        }
        else
        {
            int item;
            item=queue[front];
            if(front==rear)
            {
                front=0;
                rear=0;
            }
            else
            {
                front=front+1;
            }
            cout<<item<<" is deleted."<<endl<<endl;
        }
    }
    void pip()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl<<endl;
    }
    void getSize()
    {
        cout<<"Queue size: "<<rear<<endl<<endl;
    }
};

int main()
{
    queues Q;
    while(1)
    {
        int choice;
        cout<<"Press 1 for insert, 2 for top/peek, 3 for delete, 4 for size, 5 for pip, 6 for exit: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            Q.insert();
            break;
        case 2:
            Q.peek();
            break;
        case 3:
            Q.deletion();
            break;
        case 4:
            Q.getSize();
            break;
        case 5:
            Q.pip(); //display
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
