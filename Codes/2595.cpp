                                      /*  ***  In The Name of God ... ***  */
                                            /*    nIMA kHODAVEISI    */
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define bug() cout << "BUG" << endl ;
#define X first
#define Y second
#define sz(x) (int)x.size()
#define per(how) cout << fixed << setprecision(how)
#define bit(a , b) (a >> b) & 1
#define all(v) v.begin() , v.end()
#define LB(x) (x & -x)
typedef long long ll;
typedef long double ld;
const ll INF = 1e18 ;
void smin(ll &x , ll y) { x = min(x , y) ; }
void smax(ll &x , ll y) { x = max(x , y) ; }

const ll MAXN = 1e6 + 100 , MAX = 1e7 + 100 ; 
ll n , a[MAXN] , m , cnt[MAX] ; 
ll num[MAX] ; 
bool is[MAX] ; 

ll how(ll l , ll r)	
{
	r = min(r , MAX - 1) ; 
	if(l >= MAX)	return 0 ; 
	return cnt[r] - cnt[l - 1] ;  
}

int main ()
{
//	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	scanf("%lld" , &n) ; 
	fill(is , is + MAX , true) ; 
	for(ll i = 0 ; i < n ; i++)		scanf("%lld" , &a[i]) , num[a[i]]++ ;
	for(ll i = 2 ; i < MAX ; i++)
	{
		cnt[i] += cnt[i - 1] ; 
		if(is[i])
		{
			cnt[i] += num[i] ; 
			for(ll j = i + i ; j < MAX ; j += i)
			{
				is[j] = false ;
				cnt[i] += num[j] ;  	
			}	
		}	
	}
	cin >> m ; 
	while(m--)
	{
		ll l , r ; 
		cin >> l >> r ;
		printf("%lld\n" , how(l , r)) ; 
	} 
}



