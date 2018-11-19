#include<bits/stdc++.h> 
using namespace std;
#define PB push_back  
#define MP make_pair  
#define SZ(v) ((int)(v).size())  
#define FOR(i,a,b) for(int i=(a);i<(b);++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)  
#define REPE(i,n) FORE(i,0,n)  
#define FORSZ(i,a,v) FOR(i,a,SZ(v))  
#define REPSZ(i,v) REP(i,SZ(v))  
typedef long long ll;
typedef unsigned long long ull;
ll gcd(ll a,ll b) { return b==0?a:gcd(b,a%b); }
#define db double
const int MAXN=100008;
int mp[MAXN];
int main()
{
	int n,k;
	while(scanf("%d%d",&n,&k)==2)
	{
		memset(mp,0,sizeof(mp));
		REP(i,n){
			int x;
			int sum=0;
			REP(j,k){
				scanf("%d",&x);
				sum=(sum<<1)+x;
			}
			mp[sum]=1;
		}
		int len=(1<<k);
		//printf("%d\n",len);
		bool flag=false;
		REP(i,len)
			REP(j,len)
				if(mp[i]&&mp[j]){
					if(i&j);
					else	flag=true;
				}
		if(mp[0]==1)	flag=true;
		if(flag)	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}