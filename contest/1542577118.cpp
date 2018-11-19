/*
5
01
10
101
11111
0
3
1 2
6 5
4 4
*/
#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <utility>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <vector>
#include <cmath>
#include <bitset>
#define Pair pair<int,int>
#define LOWBIT(x) x & (-x)
#define LL long long
#define mp make_pair
#define pb push_back
#define x first
#define y second
using namespace std;

const int MOD=1e9+7;
const int INF=0x7ffffff;
const int magic=348;
const double eps=1e-9;

typedef bitset<2333333> node;
node a[248],b;
node stdd[21];
string s[248];
string start[248],ed[248];
int ans[248];
int tot,n,q;
int p[30];

int main ()
{
	ios::sync_with_stdio(false);
	int i,j,len,k,ind1,ind2;
	cin>>n;
	for (i=1;i<=n;i++) cin>>s[i];
	p[0]=1;for (i=1;i<=25;i++) p[i]=p[i-1]*2; 
	for (i=1;i<=n;i++)
		if (s[i].size()<21)
			start[i]=ed[i]=s[i];
		else
		{
			start[i]=s[i].substr(0,20);
			ed[i]=s[i].substr(s[i].size()-20,20);
		}
	for (len=1;len<=20;len++)
		for (j=1;j<=(1<<(len+1))-2;j++)
		{
			stdd[len][j]=1;
			//cout<<i<<' '<<j<<endl;
		}
	//return 0;
	int cnt,sum;
	for (len=1;len<=20;len++)
		for (i=1;i<=n;i++)
		{
			if (s[i].size()<len) continue;
			b=0;cnt=(1<<len);
			for (j=0;j<=s[i].size()-len;j++)
			{
				sum=0;
				for (k=j;k<=j+len-1;k++)
					sum+=(s[i][k]-'0')*p[j+len-1-k];
				if (b[sum]==0) cnt--;
				b[sum]=1;a[i][(1<<len)-1+sum]=1;
			}
			if (cnt==0) ans[i]=len;
		}
	/*for (j=1;j<=n;j++)
	{
		for (i=1;i<=20;i++) cout<<a[j][i];
		cout<<endl;
	}
	for (j=1;j<=5;j++)
	{
		for (i=1;i<=50;i++)
			cout<<stdd[j][i];
		cout<<endl;
	}*/
	string cur;
	tot=n;
    cin>>q;
	for (i=1;i<=q;i++)
	{
		//scanf("%d%d",&ind1,&ind2);
		cin>>ind1>>ind2;
		tot++;
		start[tot]=start[ind1];ed[tot]=ed[ind2];
		if (start[tot].size()<20)
		{
			if (start[ind2].size()+start[ind1].size()>20)
				start[tot]+=start[ind2].substr(0,20-start[ind1].size());
			else
				start[tot]+=start[ind2];
		}
		if (ed[tot].size()<20)
		{
			if (ed[ind1].size()+ed[ind2].size()>20)
				ed[tot]=ed[ind1].substr(ed[ind1].size()-(20-ed[ind2].size())+1,20-ed[ind2].size())+ed[tot];
			else
				ed[tot]=ed[ind1]+ed[tot];
		}
		ans[tot]=max(ans[ind1],ans[ind2]);
		a[tot]=a[ind1]|a[ind2];
		cur=ed[ind1]+start[ind2];
		
		for (len=1;len<=min(20,int(cur.size()));len++)
		{
			for (j=0;j<=cur.size()-len;j++)
			{
				sum=0;
				for (k=j;k<=j+len-1;k++)
					sum+=(cur[k]-'0')*p[j+len-1-k];
				a[tot][(1<<len)-1+sum]=1;
			}
		}
		int tt=ans[tot]+1;
		//cout<<tt<<endl;
		for (k=tt;k<=20;k++)
		{
			//cout<<k<<endl;
			if ((a[tot]&stdd[k])==stdd[k]) ans[tot]=k;
		}
		cout<<ans[tot]<<endl;
	}
	return 0;
}