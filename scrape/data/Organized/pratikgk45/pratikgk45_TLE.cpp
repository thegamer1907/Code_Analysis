#include<bits/stdc++.h>
using namespace std;

#define PI acos(-1)
#define hell 1000000007
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fix(n) cout << fixed << setprecision(n)
#define mset(a,n) memset(a,n,sizeof a)
#define rep(i,a,b) for (__typeof((b)) i=(a);i<(b);i++)
#define repp(i,a,b,p) for(__typeof((b)) i=(a);i<(b);i+=p)
#define ren(i,a,b) for(__typeof((a)) i=(a);i>=(b);i--)
#define renn(i,a,b,p) for(__typeof((a) i=(a);i>=(b);i-=p)
#define ADD(a,b,c) ((a)%c+(b)%c)%c
#define SUB(a,b,c) ((a)%c-(b)%c+c)%c
#define MUL(a,b,c) (((a)%c)*((b)%c))%c
#define lbd lower_bound
#define ubd upper_bound
#define ll long long
#define ld long double
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define all(v) (v).begin(), (v).end()
#define sz(x) (ll)x.size()
#define endl "\n"
#define out(n) cout<<n<<" "
#define outl(n) cout<<n<<endl
#define line cout<<endl
#define bug(n) {outl(n);return;}
#define N 100005
ll n,m,k,a[N],l,r,x=1,c,d;
void solve(){
	cin>>n>>m>>k;
	rep(i,1,m+1)cin>>a[i];
	l=1,r=min(n,k);
	while(1){
		if(a[x]>r){
			l=r+1;
			ll y=(a[x]-l)/k;
			l+=y*k;
			r=min(n,l+k-1);
		}
		if(l>n||r>n||x>m)break;
		ll y=ubd(a+x,a+m+1,r)-lbd(a+x,a+m+1,l);
		// outl(x);
		d=0;
		while(a[x]==l)x++,d++,l++;
		// outl(x<<" "<<y);
		r+=y;
		c++;
		x+=y-d;
		// outl(l<<" "<<r<<" "<<x<<" "<<y);
	}
	bug(c);
}
void prep(){

}
int main(){
    io;
    ll t=1;
    // cin>>t;
    prep();
    fix(12);
    while(t--)
        solve();
    return 0;
}