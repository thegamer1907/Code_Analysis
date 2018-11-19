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
int main()
{
	int h,m,s,t1,t2;
	db a[3],b[2];
	while(scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2)!=EOF)
	{
		a[0]=s*360/60.0;
		a[1]=m*360/60.0+a[0]/360;
		a[2]=(h%12)*5*360/60.0+30*a[1]/360;
		b[1]=(t1%12)*5*360/60.0;
		b[0]=(t2%12)*5*360/60.0;
		//REP(i,3)	cout<<a[i]<<" ";printf("\n");
		//REP(i,2)	cout<<b[i]<<" ";printf("\n");
		int ans=0;
		if(b[0]>b[1]){
			bool flag=false;
			REP(i,3)
				if(b[0]<=a[i]&&a[i]<=360)
					flag=true;
			REP(i,3)
				if(0<=a[i]&&a[i]<=b[1])
					flag=true;
			if(!flag)	ans=1;
			flag=false;
			REP(i,3)
				if(b[1]<=a[i]&&a[i]<=b[0])
					flag=true;
			if(!flag)	ans=1;
		}
		else{
			bool flag=false;
			REP(i,3)
				if(b[1]<=a[i]&&a[i]<=360)
					flag=true;
			REP(i,3)
				if(0<=a[i]&&a[i]<=b[0])
					flag=true;
			if(!flag)	ans=1;
			flag=false;
			REP(i,3)
				if(b[0]<=a[i]&&a[i]<=b[1])
					flag=true;
			if(!flag)	ans=1;
		}
		if(ans)	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}