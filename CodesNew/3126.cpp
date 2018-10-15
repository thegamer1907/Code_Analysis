#include "iostream"
#include "fstream"
#include "algorithm"
#include "iomanip"
#include "stack"
#include "queue"
#include "string"
#include "vector"
#include "map"
#include "set"
#include "unordered_set"
#include "unordered_map"
#include "iterator"
#include <ctime>
#include "bitset"
#include "cmath"
#include "list"
#include "complex"

using namespace std;

#define f(i,n) for(int i=0; i<n;i++) 
#define rf(i, n) for(int i=n-1;i>=0;i--)
#define forn(i, j, n) for(int i=j; i<n; i++)
#define ff(i, j, n) f(i, n)f(j, n)
#define pb push_back
#define mp make_pair
#define maxi(a,b) a = max(a, b);
#define mini(a,b) a = min(a, b);
#define endl '\n'
#define all(a) a.begin(), a.end()
#define sqr(x) (x) * (x)
#define SZ(a) ((int)(a.size()))
#define watch(x) cout << (#x) << " = " << x << endl;
typedef long long ll;
typedef long double ld;
#define int ll
#define double ld
typedef pair<int, int> pii;
typedef pair<string, int> psi;
typedef pair<int, string> pis;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<char> vc;

const int sze = 5e5 + 50, INF = 1e18, mod = 1000000007;
const double eps = 1e-9, PI = 2 * acos(0.0);

template<class T>
void show(const vector<T> &a)
{
	for (T x : a)
		cout << x << " ";
	cout << endl;
}

vpii vertices[sze];
vc visit(sze, false);
vi arr(sze, 0);
int n;
int m;
int k;
int cnt = 0;
string s, t;
int col[sze];
int sum[sze];

struct pt
{
	int x, y;
};

pt pnt[2000];

signed main()
{
	/*freopen("kitchen.in", "r", stdin);
	freopen("kitchen.out", "w", stdout);*/
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	f(i, n)
	{
		cin >> arr[i];
	}

	int l = 0, r = 0;
	int j = 0;

	f(i, n)
	{
		if (j < i)
		{
			j = i;
			cnt = 0;
		}

		while (j < n)
		{
			if (cnt + !arr[j] > k)
				break;

			cnt += !arr[j];
			j++;
		}

		if (j - i > r - l)
		{
			l = i;
			r = j;
		}

		if (cnt)
			cnt -= !arr[i];
	}

	forn(i, l, r)
	{
		arr[i] += !arr[i];
	}

	cout << r - l << endl;
	f(i, n)
	{
		cout << arr[i] << " ";
	}

	return 0;
}


