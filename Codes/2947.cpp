#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <string>
#include <string.h>
#include <sstream>
#include <ctime>

using namespace std;

#define eps 1e-12
#define pi 3.14159265358979323846
#define pb push_back
#define mp make_pair
#define st first
#define nd second
#define bgn begin
#define ll long long
#define ld long double
#define ull unsigned long long
#define ii pair<ll,ll>









void zFunction(char ch[],int frst,int lst,int z[])
{
	int lft=-1,rght=-1,t,i,j,k;
	for(i=frst+1;i<=lst;i++)
	{
		if(ch[i]!=ch[frst])z[i]=0;
		else if(i>rght)
		{
			lft=rght=i;
			for(j=i,k=frst;j<=lst && ch[j]==ch[k];j++,k++)rght=j;
			z[i]=rght-lft+1;
		}
		else 
		{
			t=i-lft+frst;
			if(z[t]<rght-i+1)z[i]=z[t];
			else
			{
				lft=i;
				for(j=rght,k=rght-lft+frst;j<=lst && ch[j]==ch[k];j++,k++)rght=j;
				z[i]=rght-lft+1;
			}
		}
	}
}



const int N=1e6+10;
int n,mx,z[N];
char s[N];


void solve()
{
	cin>>s+1;
	n=strlen(s+1);
	zFunction(s,1,n,z);
	mx=0;
	for(int i=2;i<=n;i++)
	{
		mx=max(mx,min(z[i],n-i));
	}
	for(int i=2;i<=n;i++)
	{
		if(z[i]==n-i+1&&z[i]<=mx)
		{
			cout<<s+i<<"\n";
			return;
		}
	}
	cout<<"Just a legend\n";
}

int main()
{
	std::ios::sync_with_stdio(0);
	cin.tie(0);
#ifdef localProject
	freopen("in.txt","r",stdin);
#endif
	solve();
	return 0;
}