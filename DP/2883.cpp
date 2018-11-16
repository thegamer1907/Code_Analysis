/*input
4 1
8 94 0 4
89

*/
#include<bits/stdc++.h>

using namespace std;

typedef     long long      ll;
typedef     long double    ld;
typedef     pair<int,int>  pii;
typedef     pair<ll,ll>    pll;

#define     rep(i,a,b)     for(int i=a;i<b;i++)
#define     repr(i,a,b)    for(int i=a;i>=b;i--)
#define     pb             push_back
#define     mp             make_pair
#define     fs             first
#define     ss             second
#define     mems(m,b)      memset(m,b,sizeof(m))
#define     all(v)         v.begin(),v.end()
#define     mod            1000000007
#define     maxn           1000+50
#define     fast           ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
	fast;

	int n,k;
	cin>>n>>k;
	int a[n],b[k];
	rep(i,0,n) cin>>a[i];
	rep(i,0,k) cin>>b[i];
	sort(b,b+k);
	reverse(b,b+k);
	
	int e=0;
	rep(i,0,n)
	{
		if(a[i]==0)
		{
			a[i]=b[e++];
		}
	}
	int flag=0;

	rep(i,1,n)
	{
		if(a[i]<a[i-1]){flag=1;break;}
	}
	if(flag) cout<<"Yes";
	else cout<<"No";
}