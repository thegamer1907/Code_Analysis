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

const int MAXN=108;
char a[MAXN];
char b[MAXN][MAXN];
int main()
{
	int n;
	while(scanf("%s",a)!=EOF)
	{
		scanf("%d",&n);
		REP(i,n){
			scanf("%s",b[i]);
		}
		bool flag=false;
		REP(i,n)
		{
			if(strcmp(b[i],a)==0)
				flag=true;
			REP(j,n)
			{
				char s[3];
				s[0]=b[i][1];
				s[1]=b[j][0];
				s[2]='\0';
				if(strcmp(s,a)==0)
					flag=true;
			}
		}
		if(flag)	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}