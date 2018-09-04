#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define ppb(x) pop_back(x)
#define ppf(x) pop_front(x)
#define clr(a,b) memset(a,b,sizeof a)
#define ff first
#define ss second
#define umap unordered_map
#define fr(i,n) for(int i=0; i<n;++i)
#define fr1(i,n) for(int i=1; i<=n; ++i)
#define lwr(x) lower_bound(x)
#define upr(x) upper_bound(x)
#define pq priority_queue
#define mp(x, y) make_pair(x, y)

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd; 
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<pil> vpil;
typedef vector<pli> vpli;

/*primes*/
//1e6+3, 1616161, 3959297, 7393931;

ll n;

bool ok(ll k)
{
	ll t1=0, t2=0, tot=n, itr=0;
	while(tot>0){
		if(itr%2){
			t1+=tot/10;
			tot-=tot/10;
		}
		else{ 
			if(tot<k) t2+=tot;
			else t2+=k;
			tot-=k;
		}
		++itr;
	}
	if(2LL*t2>=n) return 1;
	return 0;
}

int main()
{
	//freopen("in.txt" , "r" , stdin) ;
	//freopen("out.txt" , "w" , stdout) ;
	ios_base::sync_with_stdio(false);
	cin>>n;
	ll st=1, en=n, mid;
	
	if(ok(1)){
		cout<<1;
		return 0;
	}

	while(st<=en){
		mid=(st+en)/2;
		if(ok(mid)){
			if(!ok(mid-1)) break;
			en=mid-1;
		}
		else st=mid+1;
	}

	cout<<mid;
	return 0;
}