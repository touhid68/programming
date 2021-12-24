#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    for(int i=2; i<=min(a,b); i++)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }
    return 1;
}

int gcd1(int a, int b)
{
    if(b>a)
        swap(a,b);
    while (true)
    {
        int remainder = a % b;
        if (remainder == 0)
        {
            return b;
        }
        a = b; /// a takes the bigger side
        b = remainder; /// b takes the smaller side
    }
}

int gcd2(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd2(b, a % b);
}

int gcd3(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

///int res = __gcd(a, b);
///gcd(a,gcd(b,c));
int main()
{
    int a,b,res;
    cin>>a>>b;
    res=gcd(a,b);
    cout<<res;
    return 0;
}

/// C++ program to find GCD of two or more numbers.
//int gcd(int a, int b)
//{
//    if (a == 0)
//        return b;
//    return gcd(b % a, a);
//}
//
//int findGCD(int arr[], int n)
//{
//    int result = arr[0];
//    for (int i = 1; i < n; i++)
//    {
//        result = gcd(arr[i], result);
//
//        if(result == 1)
//        {
//            return 1;
//        }
//    }
//    return result;
//}
//
//int main()
//{
//    int arr[] = { 2, 4, 6, 8, 16 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    cout << findGCD(arr, n) << endl;
//    return 0;
//}
