#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
using namespace std;
#define INF32 (0x3f3f3f3f)
#define INF64 (0x3f3f3f3f3f3f3f3fLL)
#define INF (INF32)
#define PI (3.14159265358979323846)
#define MOD (1'000'000'007)
#define fori(a,b) for(int i=a;i<b;i++)
#define forj(a,b) for(int j=a;j<b;j++)
#define fork(a,b) for(int k=a;k<b;k++)
#define pb push_back
#define pf push_front
#define mp make_pair
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


int main(void)
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int conv[] = {1, -1};
	int n; cin>>n;
	int arr[n];
	fori(0,n) cin>>arr[i];
	int x = count(arr, arr + n, 1);
	int dp[n]; dp[0] = conv[arr[0]];
	fori(1,n)
		dp[i] = max(dp[i-1] + conv[arr[i]], conv[arr[i]]);
	cout<< x + *max_element(dp, dp + n) <<endl;
}