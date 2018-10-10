#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<stack>
#include<map>
#include<vector>
#include<queue>
#include<set>
#include<iomanip>
#include<cctype> 
using namespace std;
const int MAXN=1e5+5;
const int INF=1<<30;
const long long mod=1e9+7;
const double eps=1e-8;
#define ll long long
#define edl putchar('\n')
#define sscc ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=a;i>=b;i--)
#define FORLL(i,a,b) for(ll i=a;i<=b;i++)
#define ROFLL(i,a,b) for(ll i=a;i>=b;i--)
#define mst(a) memset(a,0,sizeof(a))
#define mstn(a,n) memset(a,n,sizeof(a))
#define zero(x)(((x)>0?(x):-(x))<eps)

int main()
{	
	ll n,a,m=mod,l,k;
	cin>>n;
	FOR(i,1,n)
	{
		cin>>a;
		if(a%n<=i-1)k=a/n;
		else k=a/n+1;
		k=k*n+i;
		if(k<m)
		m=k,l=i;
	}
	cout<<l<<endl;
}
