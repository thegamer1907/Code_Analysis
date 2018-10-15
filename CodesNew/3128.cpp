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

vi vertices[sze];
vc visit(sze, false);
vi arr(sze, 0);
int n;
int m;
int k;
int cnt = 0;
string s, t;
int col[sze];
int sum[sze];
int tbl[100][100];

int gcd(int a, int b)
{
	while (a*b)
	{
		a = a % b;
		swap(a, b);
	}

	return a;
}

signed main()
{
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	f(i, n)
	{
		cin >> arr[i];
	}

	vi col;
	arr[0] == 0 ? col.pb(1) : col.pb(0);

	forn(i, 1, n)
	{
		arr[i] == 0 ? col.pb(col[i-1] + 1) : col.pb(col[i-1]);
	}

	int mx = 0, mxi = -1;

	f(i, n)
	{
		if (arr[i] == 1)
			cnt++;
		else
		{
			maxi(mx, cnt);
			cnt = 0;
		}
	}

	maxi(mx, cnt);
	cnt = 0;

	f(i, n)
	{
		if (arr[i] == 1)
		{
			cnt++;
		}

		if (arr[i] == 0)
		{
			int x = col[i] + k - 1;
			int ind = upper_bound(col.begin(), col.end(), x) - col.begin();
			if (cnt + ind - i > mx)
			{
				mx = cnt + ind - i;
				mxi = i;
			}
			cnt = 0;
		}
	}

	if (mxi > -1)
	{
		int i = mxi;
		cnt = k;
		while (i < n && cnt)
		{
			if (arr[i] == 0)
			{
				arr[i] = 1;
				cnt--;
			}
			i++;
		}
	}
	
	cout << mx << endl;
	f(i, n)
	{
		cout << arr[i] << " ";
	}

	return 0;
}


