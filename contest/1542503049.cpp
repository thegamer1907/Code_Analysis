#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main ()
{
	string s,m,a;
	int n,c=0,l=0,k=0;
	cin>>s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		if(m==s)
		{c++;}
		if(s[0]==m[1])
		{l++;}
		if(m[0]==s[1])
		{k++;}
	}

	if(c>=1 || (l>=1 && k>=1))
		cout<<"YES";
	else
		cout<<"NO";



	return 0;
}