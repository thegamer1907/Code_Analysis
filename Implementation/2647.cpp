#define _CRT_SECURE_NO_WARNINGS
#define isws std::ios::sync_with_stdio(false)
#define _USE_MATH_DEFINES
#define ll long long

#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mt make_tuple
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef pair<int, int> PII;
const ll mod = 1000000007;
const ll INF = 998244353;

const int N = 100000 + 7;

bool dam[N];

int main()
{
	isws;
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	cin >> n;
	long long ans = n / 2;
	if (n % 2 == 1) ans = (ans + 1) * -1;
	cout << ans << endl;
	return 0;
}