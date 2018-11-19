#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define sd(x) scanf("%d",&(x))
#define slld(x) scanf("%lld",&(x))
#define pd(x) printf("%d",(x))
#define plld(x) printf("%lld",(x))
#define br printf("\n")
#define pi pair<int,int>
#define vi vector<int>
#define pb push_back
#define RESET(val) memset(val, 0, sizeof(val))
#define MP(a,b) make_pair(a, b)
#define fi first
#define se second
#define fr(i,a,b) for(int i=a;i<=b;i++)
//-------------x---------------x----------------x----------------

int n,k,flag=0;
int f[16];

void k1(){
	return;
}

void k2(){
	if(f[1]>0 && f[2]>0)	flag=1;
}

void k3(){
	k2();
	if(flag==1)return;
	if((f[1] && f[6]) || (f[1] && f[4]))	flag=1;
	if((f[2] && f[4]) || (f[2] && f[5]))	flag=1;
	if((f[3] && f[4]))	flag=1;
}

void k4(){
	k3();
	if(flag==1)	return;
	if((f[1] && f[8]) || (f[1] && f[10]) || 
		(f[1] && f[12]) || (f[1] && f[14]))	flag=1;
	if((f[2] && f[8]) || (f[2] && f[9]) ||
		(f[2] && f[12]) || (f[2] && f[13]))	flag=1;
	if((f[3] && f[8]) || (f[3] && f[12]))	flag=1;
	if((f[4] && f[8]) || (f[4] && f[9])
		 ||(f[4] && f[10]) ||(f[4] && f[11]))	flag=1;
	if((f[5] && f[8]) || (f[5] && f[10]))	flag=1;	
	if((f[6] && f[8]) || (f[6] && f[9]))	flag=1;	
	if((f[7] && f[8]))	flag=1;	
}

int main(){
//	freopen("input.txt","r",stdin);
	sd(n);sd(k);
	int a;
	memset(f,0,sizeof f);
	for(int i=0;i<n;i++){
		int x=1,y=0;
		for(int j=0;j<k;j++){
			cin>>a;
			y=y+a*x;x*=2;
		}
		f[y]++;
	}
	if(f[0]>0)	return 0*puts("YES");
	if(k==1)	k1();
	if(k==2)	k2();
	if(k==3)	k3();
	if(k==4)	k4();
	if(flag==0)	puts("NO");
	else	puts("YES");
	return 0;
}