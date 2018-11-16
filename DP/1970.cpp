#include <bits/stdc++.h>

using namespace std;

#define inf INT_MAX
#define neginf INT_MIN
#define linf LLONG_MAX
#define lneginf LLONG_MIN
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(a, b, c) for(int a = b; a < c; ++a)
#define mem(a,b) memset(a, b, sizeof(a))

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, int> li;
template <typename T> using vc = vector<T>;

const int MAX = 1e9 + 7;
const double er = 1e-6;
const double pi = 3.141592653589793;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m, cnt = 0;
	cin >> n >> m;
	map<int, int> a;
	vc<int> v(n, 0);
	loop(i, 0, n)
	{
		cin >> v[i];
	}
	loop(i, 1 - n, 1)
	{
		if (!a.count(v[-i]))
			a[v[-i]] = -i;
	}
	loop(i, 1 - n, 1)
		v[-i] = a[v[-i]] == -i ? 1 : 0;
	loop(i, 2 - n, 1)
		v[-i] += v[-i + 1];
	loop(i, 0, m)
	{
		int x;
		cin >> x;
		cout << v[x - 1] << endl;
	}
}
