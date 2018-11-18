#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 1000005
#define ll long long
#define p(t) cout<<t;
#define f(i,n) for(i=0;i<n;i++)
#define g(i,n) for(i=1;i<=n;i++)
#define s(x) scanf("%I64d",&x);
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

ll r,m,a[N][5],n,b[N],d[N],c[N];

int main()
{
ios_base::sync_with_stdio(0);
ll k=0,t=0,x,sum=0,q,y=0,l=0,i,j,z,p;
cin>>n>>k;
f(i,n){
	f(j,k)cin>>a[i][j];
}
m=1;
if(n==1){
	f(j,k)if(a[0][j]==1)m=0;
} else {
	m=0;
	f(i,n){
		y=0;
		f(j,k)
			if(a[i][j]==1)y=y|(1<<j);
		for(l=0;l<=15;l++){
			if((y&l)==0 && b[l]==1){
				m=1;
				break;
			}
		}
		if(m==1)break;
		b[y]=1;
	}
}
if(m)cout<<"yes";
else cout<<"No";
return 0;
}