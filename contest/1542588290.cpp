#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for (int i=a;i<=b;i++)
#define Rep(i,a,b) for (int i=b;i>=a;i--)
using namespace std;
inline ll read()
{
    ll x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9')x=x*10+ch-'0',ch=getchar();
    return x*f;
}
int main()
{
	string S,s1;
	bool lf=false,rf=false;
	int n;
	cin>>S;
	n=read();
	For(i,1,n)
	{
		cin>>s1;
		if(s1==S)
		{
			cout<<"Yes";	
			return 0;
		}
		if(s1[1]==S[0])lf=true;
		if(s1[0]==S[1])rf=true;
		if(lf==true&&rf==true)
		{
			cout<<"YES"<<endl;	
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
