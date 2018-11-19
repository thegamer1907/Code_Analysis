#include<bits/stdc++.h>
using namespace std;
#define N 100005
#define BOOST() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
typedef long long int ll;
int main()
{
	string x;
	cin>>x;
	int t,i;
	cin>>t;
	string s[t];
	for(i=0;i<t;i++)
	{
		cin>>s[i];
	}
	int f1=0,f2=0,f3=0,f4=0;
	for(i=0;i<t;i++)
	{
		if(s[i]==x)
		{
			cout<<"YES\n";
			return 0;
		}
		if(s[i][1]==x[0])
			f1=1;
			
		if(s[i][0]==x[1])
			f2=1;
		
	}
	if((f1&&f2))
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

