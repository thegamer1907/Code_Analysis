#include<bits/stdc++.h>
using namespace std;
#define mst memset
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define F5 fflush(stdout)
#define pc putchar
#define ptf printf
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
inline void scf(int &x){scanf("%d",&x);}
inline void scf(ll &x){scanf("%I64d",&x);}
inline void scf(ull &x){scanf("%I64u",&x);}
inline void scf(double &x){scanf("%lf",&x);}
inline void scf(char &x){scanf("%c",&x);}
inline void scf(char *x){scanf("%s",x);}
const int N=1e5+7;
const int mars=0x3c3c3c3c;
//const int p=1e9+7;
typedef int Arr[N];
typedef char Err[N];
typedef bool Brr[N];
typedef ll Lrr[N];
int m,n,k,w,a,b,c,d,p,q,x,y,t,cnt,l,r,s;
Arr A;
int main(){
	int i;
	scf(n);l=mars;
	for(i=1;i<=n;i++)scf(A[i]),l=min(A[i],l);
	s=l/n*n;
	for(i=1;i<=n;i++)A[i]-=s;
	i=1;
	while(true){
		if(A[i]-c<=0)break;
		c++,i++;
		if(i>n)i=1;
	}
	ptf("%d\n",i);
}