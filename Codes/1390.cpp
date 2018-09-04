#include<bits/stdc++.h>
#define si( x ) scanf("%d", &x)
#define sll( x ) scanf("%lld", &x)
#define mp make_pair
#define pb push_back
using namespace std;

typedef pair < int , int > pii;
typedef long long ll;

ll n, S, a[100001];

bool check(ll x){
	priority_queue < ll > q;
	for(int i = 0 ; i < n ; i++)
		q.push( -(a[i] + (i+1)*x) );
	
	ll sum = 0;
	int cnt = 0;
	while(cnt < x){
		sum -= q.top();
		q.pop();
		
		cnt++;
	}
	
	return sum <= S;
}

int main( int argc, char *argv[] )
{
	cin >> n >> S;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	int l = 0, r = n;
	while(l < r){
		int mid = (l+r+1)/2;
		
		if( check(mid) ) l = mid;
		else r = mid-1;
	}
	
	int res = 0;
	priority_queue < ll > q;
	for(int i = 0 ; i < n ; i++) q.push( -(a[i]+(i+1)*l) );
	
	cout << l << ' ';
	
	while(l--) res -= q.top(), q.pop();
	cout << res << endl;
}