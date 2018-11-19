#include<bits/stdc++.h>
using namespace std;
int main()
{
	string p;
	cin>>p;
	int n;
	cin>>n;
	bool f1=false,f2=false;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if(s==p)f1=true,f2=true;
		if(s[1]==p[0])f1=true;
		if(s[0]==p[1])f2=true;
	}
	if(f1&&f2)puts("YES");else puts("NO");
	return 0;
}
