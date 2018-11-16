/*
 * Deleted code is debugged code :)
 */
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pp pair<ll,ll>
#define mp make_pair
#define PI acos(-1.0)
#define all(v) v.begin(),v.end()
#define pb push_back
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define inmap(m,u) m.find(u)!=m.end()
#define FOR(i,a,b) for(i=a;i<b;i++)
#define FREV(i,a,b) for(i=a;i>=b;i--)
#define FORI(a) for(auto it=a.begin();it!=a.end();it++)
#define READ(a,i,n) FOR(i,0,n) { sll(a[i]);}
#define DEBUG(x) cerr<<"In file "<< __FILE__ <<" at line "<< __LINE__ <<" :: "<< #x <<" = "<<x<<endl
#define sll(n) scanf("%lld", &n)
#define sll2(n,m) scanf("%lld %lld", &n, &m)
#define si(n) scanf("%d", &n)
#define ss(n) scanf(" %s", n)
#define sc(n) scanf(" %c", &n)
#define pin(n) printf("%lld ", n);
#define INF 1000000000000007
#define MOD 1000000007

using namespace std;

template<typename T>
void prn(T first) {
    cout << first << "\n";
}

template<typename T, typename... Args>
void prn(T first, Args... args) {
    cout << first << " ";
    prn(args...);
}

/*******************************************RANDOM STUFF BEGINS HERE**************************************************/

struct node {
	vi adj;
};

vector<node> tree;
vi parent;

ll dfs(ll u) {
	ll res = 0;
	for (auto v : tree[u].adj) {
		res = max(res,dfs(v));
	}
	return res+1;
}

int main() {
    ll i,j,t,n,p;
    sll(n);
    tree.resize(n+1);
    parent.resize(n+1);
    FOR(i,1,n+1) {
    	sll(p);
    	parent[i] = p;
    	if (p != -1)
    		tree[p].adj.pb(i);
    }
    ll res = 0;
    FOR(i,1,n+1) {
    	if (parent[i] == -1) {
    		res = max(res, dfs(i));
    	}
    }
    printf("%lld\n", res);
    return 0;
}