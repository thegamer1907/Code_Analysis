#include<bits/stdc++.h>
using namespace std;

//#pragma GCC optimize ("Ofast")
//#pragma GCC target ("avx,avx2")

#define rep(i, n)    for(int i = 0; i < (n); ++i)
#define repA(i, a, n)  for(int i = a; i <= (n); ++i)
#define repD(i, a, n)  for(int i = a; i >= (n); --i)
#define mp make_pair
#define pb push_back
#define X first
#define Y second

typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<ll> vi;
typedef vector<pii> vii;
const ll INF = 1e18+1;
const ll MOD = 1000000007L;
class node{
	public:
	ll level;
	ll val;
	node(ll a, ll b){
		val = a;
		level = b;
	}
};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	vi p(n);
	vector<vi>child(n);
	rep(i,n){
		cin>>p[i];
		if(p[i] != -1)
			child[p[i]-1].pb(i);
	}
	ll ans = 0;
	vi visited(n,0);
	rep(i, n){
		if(p[i] == -1){
			stack <node> s;
			s.push(node(i, 1));
			while(!s.empty()){
				node top = s.top();
				s.pop();
				if(visited[top.val] == 1){
					continue;
				}
				visited[top.val] = 1;
				if(top.level > ans){
					ans = top.level;
				}
				rep(j, child[top.val].size()){
					s.push(node(child[top.val][j], top.level+1));
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
