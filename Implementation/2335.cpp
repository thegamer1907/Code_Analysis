#include<bits/stdc++.h>
using namespace std;
int n,c;
string s;
char t;
int main()
{
	cin>>n>>s;
	t=s[0];
	for(int i=1;i<n;i++)
	{
		if(s[i]==t)
			c++;
		else
			t=s[i];
	}
	cout<<c;
	return 0;
}