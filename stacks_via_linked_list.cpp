/*-------------------- In The Name Of Allah --------------------------------

-------------------- Performer : Md Mossadek Touhid -----------------------*/


#include <bits/stdc++.h>
using namespace std;
///--------------------------------Chapter 6----------------------------------///
///------------------------Stacks Via Linked List----------------------------///
/*
class node
{
public:
    int info;
    node *link;
};
node *temp=NULL,*top=NULL;

void  push()
{
    int data;
    cout<<"\nEnter stack item: ";
    cin>>data;
    node *ptr;
    ptr=new node();
    ptr->info=data;
    ptr->link=top;
    top=ptr;
    cout<<data<<" is pushed."<<endl;
}
void peek()
{
    if(top==NULL)
    {
        cout<<"NO element to peek!"<<endl;
        return ;
    }
    cout<<top->info<<endl;
    cout<<top->info<<" is topped."<<endl;
}
void pop()
{
    if(top==NULL)
    {
        cout<<"Empty Stack!"<<endl;
        return;
    }
    temp=top;
    top=top->link;
    free(temp);
    delete(temp);
    cout<<temp->info<<" is popped."<<endl;
}

void pip()
{
    if(top==NULL)
    {
        cout<<"No element to traverse!"<<endl;
        return ;
    }
    node *srt;
    for(srt=top;;)
    {
        if(srt->link!=NULL)
        {
            cout<<srt->info<<" ";
            srt=srt->link;
        }
        else
        {
            cout<<srt->info<<endl;
            break;
        }
    }
}

int main()
{
    while(1)
    {
        int choice;
        cout<<"\nPress 1 for push, 2 for top/peek, 3 for pop, 4 for pip/traverse, 5 for exit: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            peek();
            break;
        case 3:
            pop();
            break;
        case 4:
            pip();
            break;
        case 5:
            exit(1);
        default:
            cout<<"Invalid Choice."<<endl;
        }
    }
    return 0;
}
*/
