#include <iostream>
using namespace std;

int mod(string num, int a)
{
	int res = 0;

	for (int i = 0; i < num.length(); i++){
		res = (res * 10 + (int)num[i] - '0') % a;
    cout<<res<<endl;}

	return res;
}

int main()
{
	string num = "12316767678678";
	cout << mod(num, 100);
	return 0;
}
