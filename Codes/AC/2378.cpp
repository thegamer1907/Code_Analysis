#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define vll vector<ll>
#define pii pair<int, int>
#define vii vector<pii>
#define vs vector<string>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define vvi vector< vector<int> >
#define vvii vector< vector< pii > >
#define ld long double
#define mapii map<int, int>
#define mapsi map<string, int>
#define erep(i, x, n) for (auto i = x; i<=(ll)(n); i++)
#define rep(i, x, n) for(auto i = x; i<(ll)(n); i++)
#define INF  LLONG_MAX
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
#define pi  acos(-1)
#define mod(n,m) ((n % m + m) % m)
#define eps (1e-8)
#define reset(n, m) memset(n, m, sizeof n)
#define endl '\n'
#define output freopen("output.txt", "w", stdout)
#define mp(x, y, z) {x, {y, z}}

const int N = 10000001;

int visited[N];
bool prime[N];

struct node
{
	node *lc, *rc;
	ll sum;

	node()
	{
		lc = rc = 0;
		sum = 0;
	}
};

node *root = new node();

void update(node *curr, int st, int en, int shemal, int yemeen, int val)
{
	if (shemal <= st && en <= yemeen)
	{
		curr->sum += val;
		return;
	}

	int mid = (st+en)/2;

	if (shemal <= mid)
	{
		if (!curr->lc)
			curr->lc = new node();
		update(curr->lc, st, mid, shemal, yemeen, val);
	}

	if (mid + 1 <= yemeen)
	{
		if (!curr->rc)
			curr->rc = new node();
		update(curr->rc, mid + 1, en, shemal, yemeen, val);
	}

	curr->sum = 0;

	if (curr->lc)
		curr->sum += curr->lc->sum;

	if (curr->rc)
		curr->sum += curr->rc->sum;
}

ll query(node *curr, int st, int en, int shemal, int yemeen)
{
	if (shemal <= st && en <= yemeen)
		return curr->sum;

	int mid = (st+en)/2;

	ll ret = 0;

	if (shemal <= mid && curr->lc)
		ret += query(curr->lc, st, mid, shemal, yemeen);

	if (mid + 1 <= yemeen && curr->rc)
		ret += query(curr->rc, mid + 1, en, shemal, yemeen);

	return ret;
}

void sieve()
{
	prime[0] = prime[1] = 1;

	for(int i = 2; i <= N; i++)
	{
		if (!prime[i])
		{
			for(int j = i; j <= N; j += i)
			{
				if (visited[j])
					update(root, 0, 2000000000, i, i, visited[j]);
				if (i != j)
					prime[j] = 1;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int x;
	rep(i, 0, n) cin >> x, visited[x]++;

	sieve();

	int q;
	cin >> q;

	while(q--)
	{
		int l, r;
		cin >> l >> r;

		cout << query(root, 0, 2000000000, l, r) << endl;
	}

	return 0;
}