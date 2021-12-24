/*-------------------- In The Name Of Allah --------------------------------

-------------------- Performer : Md Mossadek Touhid -----------------------*/


#include <bits/stdc++.h>
using namespace std;


///-------------------------------Chapter 5----------------------------------///
///-------------------------------Linked Lists-------------------------------///

///----------------------Singly Linked List/One Way Linked List--------------///

/*
class node
{
public:
    int info;
    node *link;
};

node *Head=NULL,*temp;

void creation(int data)
{
    node *ptr;
    ptr=new node();
    ptr->info=data;
    ptr->link=NULL;
    if(Head==NULL)
    {
        Head=ptr;
        temp=ptr;
    }
    else
    {
        temp->link=ptr;
        temp=ptr;
    }
}

void traversal()
{
    node *srt;
    for(srt=Head;;)
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
    cout<<endl;

}

void search()
{
    int s_item;
    cout<<"The searching item(node) is: ";
    cin>>s_item;
    node *srt;
    for(srt=Head;;)
    {
        if(s_item==srt->info)
        {
            cout<<"Item(node) is found"<<endl;
            break;
        }
        else
        {
            srt=srt->link;
        }
        if(srt==NULL)
        {
            cout<<"Item(node) is not found"<<endl;
            break;
        }
    }
    cout<<endl;
}

void insert_first()
{
    int data;
    cout<<"Enter a data(node) that will be inserted at first: ";
    cin>>data;
    node *ptr;
    ptr=new node();
    ptr->info=data;
    ptr->link=Head;
    Head=ptr;
    traversal();
}

void insert_last()
{
    int data;
    cout<<"Enter a data(node) that will be inserted at last: ";
    cin>>data;
    node *ptr;
    ptr=new node();
    ptr->info=data;
    ptr->link=NULL;
    node *srt;
    for(srt=Head;;)
    {
        if(srt->link==NULL)
        {
            srt->link=ptr;
            break;
        }
        else
        {
            srt=srt->link;
        }
    }
    traversal();
}

void insert_before_a_given_node()
{
    int s_item;
    cout<<"Enter search item(node) which before, a data(node) is inserted: ";
    cin>>s_item;
    node *srt,*temp;
    for(srt=Head;;)
    {
        if(s_item==srt->info)
        {
            if(srt==Head)
            {
                insert_first();
                break;
            }
            else
            {
                int data;
                cout<<"Enter a data(node) that will be inserted before given node: ";
                cin>>data;
                node *ptr;
                ptr=new node();
                ptr->info=data;
                ptr->link=srt; ///ptr->link=temp->link;
                temp->link=ptr;
                traversal();
                break;
            }
        }
        else
        {
            temp=srt;
            srt=srt->link;
        }
        if(srt==NULL)
        {
            cout<<"The given node is not found."<<endl;
        }
    }

}

void insert_after_a_given_node()
{
    int s_item;
    cout<<"Enter search item(node) which after, a data(node) is inserted: ";
    cin>>s_item;
    node *srt;
    for(srt=Head;;)
    {
        if(s_item==srt->info)
        {
            if(srt->link==NULL)
            {
                insert_last();
                break;
            }
            else
            {
                int data;
                cout<<"Enter a data(node) that will be inserted after given node: ";
                cin>>data;
                node *ptr;
                ptr=new node();
                ptr->info=data;
                ptr->link=srt->link;
                srt->link=ptr;
                traversal();
                break;
            }
        }
        else
        {
            srt=srt->link;
        }
        if(srt==NULL)
        {
            cout<<"The given node is not found."<<endl;
        }
    }
}

//void delete_first()  ///Another first deletion code is given just after this.
//{
//    node *srt;
//    for(srt=Head;;)
//    {
//        srt=srt->link;
//        Head=srt;
//        break;
//    }
//    cout<<"Linked List after first delete:"<<endl;
//    traversal();
//}

void delete_first()   ///It also works.But I could not understand it.
{
    node *srt=Head;
    Head=srt->link;
    cout<<"Linked List after first delete:"<<endl;
    traversal();
}

void delete_last()
{
    node *srt,*temp=NULL;
    for(srt=Head;;)
    {
        temp=srt;                ///These two statements are written in else portion.
        srt=srt->link;

        if(srt->link==NULL)
        {
            temp->link=NULL;
            break;
        }                       ///else{temp=srt;srt=srt->link;}
    }
    cout<<"Linked List after last delete:"<<endl;
    traversal();
}

void delete_given_node()
{
    int s_item;
    cout<<"Enter a data(node) that will be deleted: ";
    cin>>s_item;
    node *srt,*temp=NULL;
    for(srt=Head;;)
    {
        if(s_item==srt->info)
        {
            if(srt==Head)
            {
                delete_first();
                break;
            }
            else if(srt->link==NULL)
            {
                delete_last();
                break;
            }
            else
            {
                temp->link=srt->link;
                cout<<"Linked List after deleting given node:"<<endl;
                traversal();
                break;
            }
        }
        else
        {
            temp=srt;
            srt=srt->link;
        }
        if(srt==NULL)
        {
            cout<<"The given node is not found."<<endl;
            break;
        }
    }
}

void delete_before_a_given_node()
{
    int s_item;
    cout<<"Enter a data(node) which before,a data(node) will be deleted: ";
    cin>>s_item;
    node *srt,*temp=NULL,*prev=NULL;
    for(srt=Head;;)
    {
        if(s_item==srt->info)
        {
            if(srt==Head)
            {
                cout<<"No item before this.So,Not possible."<<endl;
                break;
            }
            else if(temp==Head)
            {
                delete_first();
                break;
            }
            else
            {
                prev->link=temp->link;  ///prev->link=srt;
                cout<<"Linked List after deleting before a given node:"<<endl;
                traversal();
                break;

            }
        }
        else
        {
            prev=temp;
            temp=srt;
            srt=srt->link;
        }
        if(srt==NULL)
        {
            cout<<"The given node is not found."<<endl;
            break;
        }
    }
}

void delete_after_a_given_node()
{
    int s_item;
    cout<<"Enter a data(node) which after,a data(node) will be deleted: ";
    cin>>s_item;
    node *srt,*temp;
    for(srt=Head;;)
    {       ///Here, we can write temp=srt->link;then, else{srt=srt->link;}
        if(s_item==srt->info)
        {
            if(temp==NULL)
            {
                cout<<"No item after this.So,Not possible."<<endl;
                break;
            }
            else if(temp->link==NULL)
            {
                delete_last();
                break;
            }
            else
            {
                srt->link=temp->link;
                cout<<"Linked List after deleting after a given node:"<<endl;
                traversal();
                break;
            }
        }
        else            /// Above comment line is for this else{} condition.
        {
            srt=temp;
            temp=srt->link;
        }
        if(srt==NULL)
        {
            cout<<"The given node is not found."<<endl;
            break;
        }
    }
}

int main()
{
    int n,item,i;
    cout<<"Enter list size: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>item;
        creation(item);
    }
    cout<<endl;
    traversal();
    search();
    insert_first();
    insert_last();
    insert_before_a_given_node();
    insert_after_a_given_node();
    delete_first();
    delete_last();
    delete_given_node();
    delete_before_a_given_node();
    delete_after_a_given_node();

    return 0;
}
*/
