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
map<ll,ll>a,mpp;
ll dp[N] ;
vector<ll>v, v1, v2;
stack<ll>s,s1;
ll visit[N] ;
struct domingo {
int val, left, right;
}o[N];
ll BIT[N] ;
ll seg_tree[4*N] ;
set< char >se ;
int A[5005][3] ;
int main()
{ fast;
	int n , sum = 0 , mx = 0 , ct = 0 , flag = 0 ;
	cin >> n ;
	for(int i = 0 ;i < n; i++) {
		int x ;
		cin >> x ;
		if(x == 0 )
			flag  = 1 ; 
		if(x)
			sum++ ;
		if(x == 0 )
			ct++ ;
		else
			ct-- ;
			if(ct < 0 )
			ct = 0 ;
		mx = max(mx , ct ) ;
	}
	//cout << sum << ' ' << mx ;
	if(flag)
	cout << sum + mx ;
	else 
		cout << n - 1 ; 
 }


