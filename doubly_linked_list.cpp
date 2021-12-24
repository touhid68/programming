/*-------------------- In The Name Of Allah --------------------------------

-------------------- Performer : Md Mossadek Touhid -----------------------*/


#include <bits/stdc++.h>
using namespace std;


///-------------------------------Chapter 5----------------------------------///
///-------------------------------Linked Lists-------------------------------///

///-----------------------Doubly Linked List/Two Way Linked List-------------///
/*

#include <iostream>

using namespace std;
class node
{
public:
    int info;
    node *next;
    node *prev;
};
node *Head=NULL,*Tail=NULL;
void creation(int data)
{
    node *ptr;
    ptr=new node;
    ptr->prev=NULL;
    ptr->info=data;
    ptr->next=NULL;
    if(Head==NULL)
    {
        Head=ptr;
        Tail=ptr;

    }
    else
    {
        Tail->next=ptr;
        ptr->prev=Tail;
        Tail=ptr;
    }
}
void traversal()
{
    node *srt=Head;
    while(srt!=NULL)
    {
        cout<<srt->info<<" ";
        srt=srt->next;
    }
    cout<<"\n";
}
void search()
{
    cout<<"Enter the search item : ";
    int s_item;
    cin>>s_item;
    node *srt;
    for(srt=Head;;)
    {
        if(srt->info==s_item)
        {
            cout<<"Search item found.";
            break;
        }

        else if(srt->next==NULL)
        {
            cout<<"No search item found.";
            break;
        }
        else
        {
            srt=srt->next;
        }
    }
    cout<<endl;
}
void insert_first()
{
    int item;
    cout<<"Enter a data(node) that will be inserted at first : ";
    cin>>item;
    node *ptr=new node;
    ptr->prev=NULL;
    ptr->info=item;
    ptr->next=Head;
    Head->prev=ptr;
    Head=ptr;
    traversal();
}
void insert_last()
{

    int item;
    cout<<"Enter a data(node) that will be inserted at last : ";
    cin>>item;
    node *ptr=new node;
    ptr->prev=Tail;
    ptr->info=item;
    ptr->next=NULL;
    Tail->next=ptr;
    Tail=ptr;
    traversal();

}
void insert_after_a_given_node()
{
    int s_item;
    cout<<"Enter search item(node) which after, a data(node) is inserted : ";
    cin>>s_item;
    node *srt,*temp;
    for(srt=Head;;)
    {
        if(srt->info==s_item)
        {
            temp=srt->next;
            if(temp==NULL)
            {
                insert_last();
                break;
            }
            else
            {
                int item;
                cout<<"Enter a data(node) that will be inserted after given node : ";
                cin>>item;
                node *ptr=new node;
                ptr->prev=srt;
                ptr->info=item;
                ptr->next=temp;
                srt->next=ptr;
                temp->prev=ptr;
                traversal();
                break;
            }
        }
        else
        {
            srt=srt->next;
        }
        if(srt==NULL)
        {
            cout<<"No search item found.\n";
            break;
        }
    }
}
void insert_before_a_given_node()
{
    int s_item;
    cout<<"Enter search item(node) which before, a data(node) is inserted : ";
    cin>>s_item;
    node *srt,*temp=NULL;
    for(srt=Head;;)
    {
        if(srt->info==s_item)
        {
            if(srt==Head)
            {
                insert_first();
                break;
            }
            else
            {
                int item;
                cout<<"Enter a data(node) that will be inserted before given node : ";
                cin>>item;
                node *ptr=new node;
                ptr->prev=temp;
                ptr->info=item;
                ptr->next=srt;
                temp->next=ptr;
                srt->prev=ptr;
                traversal();
                break;
            }
        }
        else
        {
            temp=srt;
            srt=srt->next;

        }
        if(srt==NULL)
        {
            cout<<"No search item found.\n";
            break;
        }
    }
}
void delete_first()
{
    Head=Head->next;
    Head->prev=NULL;
    cout<<"Linked List after first delete :"<<endl;
    traversal();
}
void delete_last()
{
    Tail=Tail->prev;
    Tail->next=NULL;
    cout<<"Linked List after last delete :"<<endl;
    traversal();
}
void delete_given_node()
{
    int item;
    cout<<"Enter a data(node) that will be deleted : ";
    cin>>item;
    node *srt,*temp,*ptr;
    for(srt=Head;;)
    {
        temp=srt->next;

        if(srt->info==item)
        {
            if(srt==Head)
            {
                delete_first();
                break;
            }
            else if(srt==Tail)
            {
                delete_last();
                break;
            }
            else
            {
                ptr->next=temp;
                temp->prev=ptr;
                cout<<"Linked List after deleting given node :"<<endl;
                traversal();
                break;
            }
        }
        else
        {
            ptr=srt;
            srt=srt->next;
        }
        if(srt==NULL)
        {
            cout<<"No search item found.\n";
            break;
        }
    }
}
void delete_after_a_given_node()
{
    int s_item;
    cout<<"Enter a data(node) which after,a data(node) will be deleted : ";
    cin>>s_item;
    node *srt,*temp1,*temp2;
    for(srt=Head;;)
    {
        temp1=srt->next;

        temp2=temp1->next;
        if(srt->info==s_item)
        {
            if(temp1==Tail)
            {
                delete_last();
                break;
            }

            else
            {
                srt->next=temp1->next;
                temp2->prev=srt;
                cout<<"Linked List after deleting after a given node :"<<endl;
                traversal();
                break;
            }

        }
        else
        {
            srt=srt->next;
        }
        if(srt==NULL)
        {
            cout<<"No search item found.\n";
            break;
        }
    }
}
void delete_before_a_given_node()
{
    int s_item;
    cout<<"Enter a data(node) which before,a data(node) will be deleted : ";
    cin>>s_item;
    node *srt,*ptr=NULL,*temp;
    for(srt=Head;;)
    {

        if(srt->info==s_item)
        {
            if(ptr==Head)
            {
                delete_first();
                break;
            }
            else if(srt==Head)
            {
                cout<<srt->info<<" is the first element.\n";
                break;
            }
            else
            {
                temp->next=srt;
                srt->prev=temp;
                cout<<"Linked List after deleting before a given node :"<<endl;
                traversal();
                break;
            }
        }
        else
        {
            temp=ptr;
            ptr=srt;
            srt=srt->next;
        }
        if(srt==NULL)
        {
            cout<<"No search item found.\n";
        }
    }
}
int main()
{

    int n,item;
    cout<<"Enter List Size: ";
    cin>>n;
    for(int i=0; i<n; i++)
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

#include<iostream>
using namespace std;

class node
{
public:
    int info;
    node *next,*prev;
};
node *head,*temp,*tail;

void creation(int data)
{
    node *ptr;
    ptr=new node();
    ptr->info = data;
    ptr->next=NULL ;
    ptr->prev=NULL ;
    if (head==NULL)
    {
        head = ptr;
        temp = ptr;
    }
    else
    {
        temp->next = ptr;
        temp=ptr;
    }
}
void traversal()
{
    node *srt;
    for(srt=head ;  ; )
    {
        if(srt->next==NULL)
        {
            cout<<srt->info<<endl;
            break;
        }
        else
        {
            cout<<srt->info<<" ";
            srt=srt->next;
        }
    }
}
void search()
{
    int item,i;
    cout<<"Enter search item = ";
    cin>>item;
    node *srt;
    for(srt=head; ;)
    {
        if(srt->info == item)
        {
            cout<<"Item is found."<<endl;
            break;
        }
        else
        {
            srt=srt->next;
        }
        if(srt == NULL)
        {
            cout<<"Item is not found."<<endl;
            break;
        }
    }
}
void insert_first()
{
    int item;
    cout<<"Enter item = ";
    cin>>item;
    node *srt,*ptr;
    ptr=new node();
    ptr->info=item;
    ptr->next=head ;
    ptr->prev=NULL;
    head=ptr;
    traversal();
}
void insert_last()
{
    int item;
    cout<<"Enter item = ";
    cin>>item;
    node *srt,*ptr;
    ptr=new node();
    ptr->info=item;
    ptr->next=NULL ;
    ptr->prev=NULL;
    for(srt=head ; ; )
    {
        if(srt->next == NULL)
        {
            srt->next = ptr;
            ptr->prev = srt;
            break;
        }
        else
        {
            srt=srt->next;
        }
    }
    traversal();
}
void insert_after_a_given_node()
{
    node *srt,*ptr;
    int item,s_item;
    cout<<"Enter a search item = ";
    cin>>s_item;
    ptr = new node();
    ptr->next = NULL;
    ptr->prev = NULL;
    for(srt = head ;  ;  )
    {
        if(srt->info == s_item)
        {
            if(srt->next == NULL)
            {
                insert_last();
                break;
            }
            else
            {
                cout<<"Enter a new item = ";
                cin>>item;
                ptr->info = item;
                ptr->next = srt->next;
                srt->next = ptr;
                traversal();
                break;
            }
        }
        else
        {
            srt = srt->next;
        }
        if(srt == NULL)
        {
            cout<<"Item is not found."<<endl;
            break;
        }
    }
}
void  insert_before_a_given_node()
{
    node *srt,*ptr;
    int item,s_item;
    cout<<"Enter a search item = ";
    cin>>s_item;
    ptr = new node();
    ptr->next = NULL;
    ptr->prev = NULL;
    for(srt = head ;  ;  )
    {
        if(srt->info == s_item)
        {
            if(srt == head)
            {
                insert_first();
                break;
            }
            else
            {
                cout<<"Enter a new item = "<<endl;
                cin>>item;
                ptr->info = item;
                temp->next = ptr;
                ptr->prev = temp;
                ptr->next = srt;
                traversal();
                break;
            }
        }
        else
        {
            temp = srt;
            srt = srt->next;
        }
        if(srt == NULL)
        {
            cout<<"Item is not found."<<endl;
            break;
        }
    }
}
void  delete_first()
{
    node *srt = head;
    head = srt->next;
    traversal();
}
void  delete_last()
{
    node *srt;
    for(srt = head; ; )
    {
        if (srt->next == NULL)
        {
            temp->next = NULL;
            traversal();
            break;
        }
        else
        {
            temp = srt;
            srt = srt->next;
        }
    }
}
void delete_given_node()
{
    node *srt,*temp=NULL;
    int i,item;
    cout<<"Enter search item value = ";
    cin>>item;
    cout<<endl;
    for(srt=head; ; )
    {
        if(srt->info == item)
        {
            if(srt==head)
            {
                head = srt->next;
                break;
            }
            else if(srt->next == NULL)
            {
                temp->next= NULL;
                break;
            }
            else
            {
                temp->next = srt->next ;
                break;
            }
        }
        else
        {
            temp = srt;
            srt=srt->next;
        }
        if(srt == NULL)
        {
            cout<<"Item is not found."<<endl;
            break;
        }
    }
    traversal();
}
void  delete_after_a_given_node()
{
    node *srt,*temp=NULL;
    int i,item;
    cout<<"Enter search item value = ";
    cin>>item;
    cout<<endl;
    for(srt=head;  ;  )
    {
        if(srt->info==item)
        {
            temp = srt->next;
            if(temp->next == NULL)
            {
                srt->next = NULL;
                break;
            }
            else
            {
                srt->next = temp->next;
                break;
            }
        }
        else
        {
            srt = srt->next;
        }
        if(srt== NULL)
        {
            cout<<"item is not found."<<endl;
            break;
        }
    }
    traversal();
}
void  delete_before_a_given_node()
{
    node *srt,*temp=NULL,*tail=NULL;
    int i,item;
    cout<<"Enter search item value = ";
    cin>>item;
    cout<<endl;
    for(srt=head; ; )
    {
        if(srt->info == item)
        {
            if(temp == head)
            {
                head = srt;
                break;
            }
            else
            {
                tail->next = srt;

                break;
            }
        }
        else
        {
            tail = temp;
            temp=srt;
            srt = srt->next;
        }
    }
    traversal();
}
int main()
{
    int item,i,n;
    cout<<"Enter No. of Node = ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter "<<i+1<<"'th element = ";
        cin>>item;
        creation(item);
    }
    cout<<endl<<"The list is :"<<endl;
    cout<<endl;
    traversal();
    cout<<endl;
A:
    int a;
    cout<<"Enter a Number as following wishes."<<endl;
    cout<<"1 = search"<<endl<<"2 = insert_first"<<endl<<"3 = insert_last"<<endl<<"4 =  insert_after_a_given_node"<<endl;
    cout<<"5 =  insert_bofore_a_given_node"<<endl<<"6 = delete_first"<<endl<<"7 = delete_last"<<endl<<"8 = delete_given_node"<<endl;
    cout<<"9 =  delete_before_a_given_node"<<endl<<"10 =  delete_after_a_given_node"<<endl;
    cout<<"Enter the value = ";
    cin>>a;
    if(a==1)
    {
        search();
        goto A;
    }
    else if(a==2)
    {
        insert_first();
        goto A;
    }
    else if(a==3)
    {
        insert_last();
        goto A;
    }
    if(a==4)
    {
        insert_after_a_given_node();
        goto A;
    }
    else if(a==5)
    {
        insert_before_a_given_node();
        goto A;
    }
    else if(a==6)
    {
        delete_first();
        goto A;
    }
    else if(a==7)
    {
        delete_last();
        goto A;
    }
    else if(a==8)
    {
        delete_given_node();
        goto A;
    }
    else if(a==9)
    {
        delete_before_a_given_node();
        goto A;
    }
    else if(a==10)
    {
        delete_after_a_given_node();
        goto A;
    }
    else
    {
        cout<<"Break."<<endl;
    }
    cout<<endl;
}


