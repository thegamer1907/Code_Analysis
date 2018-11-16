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
const ll INF = 1000000007;

const int N = 100000 + 7;

int main()
{
	isws;
	cin.tie(NULL);
	int n;
	cin >> n;
	int ans = 0;
	while (n--)
	{
		int p, q;
		cin >> p >> q;
		if (q - p >= 2) ans++;
	}
	cout << ans << endl;
	return 0;
}