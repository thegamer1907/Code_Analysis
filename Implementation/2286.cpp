#include"bits/stdc++.h"
using namespace std;
/*--------------------------------#defines------------------------------------------*/
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbug cout << endl
#define dbug1(x) cout << x << ' '
/*-------------------------------CODE START-----------------------------------------*/
const int N=1<<20;
const int MOD=1e9+7;
typedef long long int ll;
priority_queue< pair<ll,int> >pq;
vector< pair<ll,ll> >vp;
map<ll,ll>mp,mpp;
ll dp[N] ;
vector<ll>v, v1, v2;
stack<ll>s,s1;
ll visit[N] ;
struct domingo {
int val, left, right;
}o[N];
ll BIT[N] ;
ll seg_tree[4*N] ;
set< long long int >se[250] ;
int main()
{ fast;
   ll n, m, val, k, d, mi=1e9, mx(0) ;
	cin >> n >> m >> k ;
	if((n * ((k * (k + 1)) / 2 ) ) - m > 0 )
		cout << (n * ((k * (k + 1)) / 2 ) ) - m ;
	else
		cout << 0 ;
}


