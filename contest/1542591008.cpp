#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin >>a;
	int n,kt=0,kt1=0,kt2=0;
	cin >>n;
	string s[n];
	for (int i=0;i<n;i++)
	cin>>s[i];
	for (int i=0;i<n;i++)
	if (s[i]==a) {
		kt=1;
		break;
	}
	for (int i=0;i<n;i++)
	{
		if (s[i][0]==a[1]) kt1=1;
		if (s[i][1]==a[0]) kt2=1;
	}
	if (kt||(kt1&&kt2)) cout << "YES" <<endl;
	else
	cout << "NO" <<endl;
}