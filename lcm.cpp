#include <bits/stdc++.h>
using namespace std;

///for two numbers
int lcm(int a, int b) {
  for (int i = 1; ; i++) {
    if (i % a == 0 && i % b == 0) {
      return i;
    }
  }
}
///for more numbers
typedef long long int ll;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll findlcm(int arr[], int n)
{
    ll ans = arr[0];

    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
               (gcd(arr[i], ans)));

    return ans;
}

int main()
{
    int arr[] = { 2, 7, 3, 9, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%lld", findlcm(arr, n));
    return 0;
}
