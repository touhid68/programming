/*-------------------- In The Name Of Allah --------------------------------

-------------------- Performer : Md Mossadek Touhid -----------------------*/


#include <bits/stdc++.h>
using namespace std;


///---------------------------Chapter 4--------------------------------------///
///---------------------Operation on Array-----------------------------------///
/*
void traversal(int a[],int n)
{
    int k=1;
    while(k<=n)
    {
        printf("%d ",a[k]);
        k++;
    }
    printf("\n\n");
}

void insertion(int a[],int n)
{
    int item,k;
    printf("Select the positon in where insert a number: ");
    scanf("%d",&k);
    printf("Take a number that will be inserted: ");
    scanf("%d",&item);
    int i=n;
    while(i>=k)
    {
        a[i+1]=a[i];
        i--;
    }
    a[k]=item;
    n=n+1;
    printf("Array after insertion:\n");
    traversal(a,n);
}

void deletion(int a[],int n)
{
    int k,item;
    printf("Select the positon from where delete the number: ");
    scanf("%d",&k);
    item=a[k];
    while(k<=n)
    {
        a[k]=a[k+1];
        k++;
    }
    printf("Array after deletion:\n");
   traversal(a,n);
}

void search(int a[],int n)
{
    int item;
    printf("The searching item is: ");
    scanf("%d",&item);
    int k=1;
    while(k<=n)
    {
        if(a[k]==item)
        {
            break;
        }
        k++;
    }
    if(k>n)
        printf("%d is not found.\n\n",item);
    else
        printf("%d is found in %dth position.\n\n",item,k);

}

void binary_search(int a[],int n)
{
    int item;
    printf("(Binary search)The searching item is: ");
    scanf("%d",&item);
    int low_index=1;
    int high_index=n;
    int mid_index;
    while(low_index<=high_index)
    {
        mid_index=(low_index+high_index)/2;
        if(item==a[mid_index])
        {
            break;
        }
        if(item<a[mid_index])
        {
            high_index=mid_index-1;
        }
        else
        {
            low_index=mid_index+1;
        }
    }
    if(low_index>high_index)
        printf("%d is not found.\n",item);
    else
        printf("%d is found in %dth position.\n",a[mid_index],mid_index);

}

int main()
{
    int n=10;
    int a[n],i;
    srand(time(NULL));
    printf("Initial Array:\n");
    for(i=1; i<=n; i++)
    {
        a[i]=(rand()%5)+1;
    }
    traversal(a,n);
    insertion(a,n);
    deletion(a,n);
    search(a,n);
    ///before binary searching,array must be sorted with ascending order.
    sort(a,a+n+1);
    binary_search(a,n);
    return 0;

}
*/
