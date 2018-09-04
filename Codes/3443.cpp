#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define per(i,a,b) for(int i=(b-1);i>=(a);i--)
#define all(V) V.begin(),V.end()
#define sz(a) (int)a.size()
#define de(a) cout<<#a<<" = "<<a<<endl
#define dd(a) cout<<#a<<" = "<<a
typedef long long ll;
typedef pair<int ,int > pii;
typedef vector<int> vi;
//----

const int N=1e5+5;
const int mod=1e9+7;

int main()
{
	ll n;
	scanf("%lld",&n);
	ll l=1,r=n;
	while(l<r)
	{
		ll mid=(l+r)/2;
		ll c1=0,c2=0,nn=n;
		while(nn)
		{
			c1+=min(mid,nn);
			nn-=min(mid,nn);
			c2+=nn/10;
			nn-=nn/10;
		}
		if(c1>=c2)r=mid;
		else l=mid+1;
	}
	printf("%lld\n",l);
	return 0;	
}
