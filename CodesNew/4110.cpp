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

const int N=2e5+5;
const int mod=1e9+7;
int data[N];
ll pre[N];
int main()
{
	int n,q;
	scanf("%d%d",&n,&q);
	rep(i,1,n+1)scanf("%d",&data[i]),pre[i]=pre[i-1]+data[i];
	ll now=0;
	while(q--)
	{
		ll a;
		scanf("%lld",&a);
		now+=a;
		if(now>=pre[n])
		{
			printf("%d\n",n);
			now=0;
		}
		else printf("%d\n",n-(int)(upper_bound(pre,pre+n+1,now)-pre-1));
	}
	return 0;	
}
