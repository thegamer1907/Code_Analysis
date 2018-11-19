#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num, ji1=0, ji2=0;
	string  passward;
	cin>>passward>>num;
	for (int i=1; i<=num; i++)
	{
		string s;
		cin>>s;
		if (s==passward || s[1]==passward[0] && s[0]==passward[1])
		{
			cout<<"YES";
			return 0;
		}
		else if (s[1]==passward[0])
		ji1++;
		else if (s[0]==passward[1])
		ji2++;
	}
	if (ji1>0 && ji2>0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}