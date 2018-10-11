#include <bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#pragma GCC optimize ("O3")
#pragma comment(linker, "/STACK:936777216")
#ifdef _MSC_VER
#  include <intrin.h>
#  define __builtin_popcount __popcnt
#endif
using namespace std;
#define EPS 1E-9
#define ll long long
#define ull unsigned long long
#define Wal3a ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD (ll)1e9+7
#define nl '\n'
// fflush(stdout);  cout << flush;
// freopen("input.in","r",stdin);
// freopen("ouput.out","w",stdout);
int OO = 0x3f3f3f3f;
/*set<int>adj[200005];
const int MAX = 1e9;
int viso[MAX / 8 + 1];
void setVisited(int i) {
viso[i >> 3] |= (1 << (i & 7));
}
bool isVisited(int i) {
return viso[i >> 3] & (1 << (i & 7));
}*/
ll arr[100005];
ll maxi = 0;
ll x, y,k;
int main(){
	Wal3a;
	ll n;
	cin >> n>>k;
	for (int i = 0; i < n; i++)cin >> arr[i];
	int i = 0, j = 0;
	ll sum = 0;
	while (i<n){
		sum += arr[i];
		if (sum>k){
			sum -= arr[j];
			j += 1;
		}
		ll sol = (i - j) + 1;
		if (sol>maxi)maxi = sol;
		i++;
	}
	cout << maxi << nl;
}