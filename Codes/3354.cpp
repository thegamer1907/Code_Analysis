#define _CRT_SECURE_NO_WARNINGS
#define isws std::ios::sync_with_stdio(false)
#define _USE_MATH_DEFINES
#define ll long long int

#include <bits/stdc++.h>

using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
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
	int mint = INT_MAX;
	int ans = -1;
	rep(i, 0, n)
	{
		int t;
		cin >> t;
		bool flag = false;
		if (t <= i) flag = true;
		int k = (t - i) / n;
		if (k * n != t - i) k++;
		int tt = n * k + i;
		if (flag) tt = i;
		if (tt < mint)
		{
			ans = i + 1;
			mint = tt;
		}
	}
	cout << ans << endl;
	return 0;
}