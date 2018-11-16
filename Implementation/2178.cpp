#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,c,aa=0,bb=0,cc=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		aa+=a;
		bb+=b;
		cc+=c;
	}
	if(aa!=0 || bb!=0 || cc!=0)
	{
		cout<<"NO\n";
	}
	else
	{
		cout<<"YES\n";
	}
	return 0;
}
