#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define INF32 (0x3f3f3f3f)
#define INF64 (0x3f3f3f3f3f3f3f3fLL)
#define INF (INF32)
#define PI (3.14159265358979323846)
#define MOD (10e9+7)
#define typeof(x) remove_reference<decltype(x)>::type
#define _picktype(a,b) common_type<typeof(a),typeof(b)>::type
#define rep(i,a,b) for(_picktype((a),(b)) i=(a); i<(b); i++)
#define repr(i,a,b) for(_picktype((a),(b)) i=(a); i>=(b); i--)
#define fori(a,b) rep(i,(a),(b))
#define forj(a,b) rep(j,(a),(b))
#define fork(a,b) rep(k,(a),(b))
#define rfori(a,b) repr(i,(a),(b))
#define rforj(a,b) repr(j,(a),(b))
#define rfork(a,b) repr(k,(a),(b))
#define forit(a,b) for(auto it=(a); it!=(b); it++)
#define rforit(a,b) for(auto it=(a); it!=(b); it--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define mset(a,b) memset(a,b,sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pf push_front

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.precision(10); cout<<fixed;
	int n,t; cin>>n>>t; t--;
	int arr[n];
	fori(0, n) {
		cin>>arr[i];
	}
	int i = 0;
	while(i!=t && i<n-1) {
		i += arr[i];
	}
	cout << (i==t ? "YES" : "NO") << endl;
}