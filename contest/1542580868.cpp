#include<bits/stdc++.h>
using namespace std;
int main()
{
	string p;
	string in;
	int n;
	cin>>p;
	cin>>n;
	bool f2=false,s1=false;
	bool flag=false;
	while(n>0)
	{
		cin>>in;
		if((in[0]==p[0] && in[1]==p[1]) || (in[0]==p[1] && in[1]==p[0]))
		{
			cout<<"YES\n";
			flag=true;
			break;
		}
		if(in[1]==p[0])
			f2=true;
		if(in[0]==p[1])
			s1=true;
		if(f2&&s1)
		{
			cout<<"YES\n";
			flag=true;
			break;
		}
		n--;
	}
	if(!flag)
		cout<<"NO\n";
	return 0;
}
