#include<bits\stdc++.h>
using namespace std;
#define  ll long long
#define  ull unsigned long long
#define mINF(a) memset(a,0x3f3f3f3f,sizeof(a))
#define m0(a) memset(a,0,sizeof(a))
#define mf1(a) memset(a,-1,sizeof(a))
const int INF=0x3f3f3f3f;
const int len=1e2+5;
const ll MAX=1e18;
int d[len][len];
int main()
{
	int a,b;
	string str;
	int sum=0;
	cin>>a>>b;
	map<string,int>ma;
	for(int i=0;i<a;++i)
	{
		cin>>str;
		ma[str]=1;
	}
	for(int i=0;i<b;++i)
	{
		cin>>str;
		if(ma[str]==1)
		{
			sum++;
		}
	}
	if(sum%2==0)
	{
		if(a>b)puts("YES");
		else puts("NO");
	}
	else
	{
		a++;
		if(a>b)puts("YES");
		else puts("NO");
	}
}