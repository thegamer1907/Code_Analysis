#include<bits/stdc++.h>
 
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
 
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define enddl '\n'
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define full(a) a.begin(),a.end()
#define mem(a,x) memset(a,x,sizeof(a))
#define PI 3.14159265

const int MAXN = 1e5+5;

const int MOD = 1e9+7;

using namespace std;

int main() {
	ll n;
	cin >> n;
	ll low = 1, high = n;
	ll target = n/2 + (n%2);
	ll ans = n;
	while(low <= high) {
		ll mid = low + (high - low)/2;
		ll vasya = 0, petya = 0;
		ll nn = n;
		int turns = 0;
		while(nn > 0) {
			turns++;
			if(turns%2) {
				if(nn <= mid) {
					vasya+=nn;
					nn = 0;
				}
				else {
					vasya+=mid;
					nn-=mid;
				}
			}
			else {
				petya+=(nn/10);
				nn-=(nn/10);
			}
		}
		if(vasya >= target) {
			ans = mid;
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
		// cout << "MID " << mid << " " << vasya << endl;  
	}
	cout << ans << endl;



}