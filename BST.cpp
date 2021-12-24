/*-------------------- In The Name Of Allah --------------------------------

-------------------- Performer : Md Mossadek Touhid -----------------------*/


#include <bits/stdc++.h>
using namespace std;

///--------------------------Chapter 7---------------------------------------///
///----------------------------Trees-----------------------------------------///
//-------------------------Binary Search Tree--------------------------------//

/*
struct node
{
    int key;
    node *left,*right;
};

struct node* Search(node *root,int val)
{

    if(root==NULL || root->key==val)
        return root;
    if(val>root->key)
        return Search(root->right,val);
    if(val<root->key)
        return Search(root->left,val);
}
struct node* find_minimum(struct node *root)
{
    if(root == NULL)
        return NULL;
    else if(root->left != NULL) // node with minimum value will have no left child
        return find_minimum(root->left); // left most element will be minimum
    return root;
}

struct node* newNode(int val)
{
    struct node *tmp=new node;
    tmp->key=val;
    tmp->right=tmp->left=NULL;
    return tmp;
}

struct node* insertNode(struct node *root,int val)
{
    if(root==NULL)
        return newNode(val);
    if(val<=root->key)
        root->left=insertNode(root->left,val);
    if(val>root->key)
        root->right=insertNode(root->right,val);
    return root;
}

struct node* deleteNode(struct node *root, int val)
{
    //searching for the item to be deleted
    if(root==NULL)
        return NULL;
    if (val>root->key)
        root->right = deleteNode(root->right,val);
    else if(val<root->key)
        root->left= deleteNode(root->left,val);
    else
    {
        //No Children
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }

        //One Child
        else if(root->left==NULL || root->right==NULL)
        {
            struct node *temp;
            if(root->left==NULL)
                temp = root->right;
            else
                temp = root->left;
            free(root);
            return temp;
        }

        //Two Children
        else
        {
            struct node *temp = find_minimum(root->right);
            root->key = temp->key;
            root->right = deleteNode(root->right, temp->key);
        }
    }
    return root;
}

void inorderTraverse(node *root)
{
    if(root!=NULL)
    {
        inorderTraverse(root->left);
        cout<<root->key<<" ";
        inorderTraverse(root->right);
    }
}

void preorderTraverse( node* root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorderTraverse(root->left);
    preorderTraverse(root->right);
}
void postorderTraverse( node* root)
{
    if (root == NULL)
        return;
    postorderTraverse(root->left);
    postorderTraverse(root->right);
    cout << root->data << " ";
}
int main()
{
    struct node *root;
    root = newNode(20);
    insertNode(root,5);
    insertNode(root,1);
    insertNode(root,15);
    insertNode(root,9);
    insertNode(root,7);
    insertNode(root,12);
    insertNode(root,30);
    insertNode(root,25);
    insertNode(root,40);
    insertNode(root, 45);
    insertNode(root, 42);
    cout<<"Inorder Traverse:\n";
    inorderTraverse(root);

    cout<<"\nAfter delete:\n";
    root = deleteNode(root, 1);
    root = deleteNode(root,40);
    root = deleteNode(root,45);
    root = deleteNode(root,9);
    inorderTraverse(root);

    int item;
    cout<<"\nEnter Value To search: ";
    cin>>item;
    node *s=Search(root,item);
    if(s==NULL)
        cout<<"Element not found.\n";
    else
        cout<<"Element Found.\n";

    return 0;

}

*/
