#include<bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define RFOR(i,b,a) for(int i = (b) - 1; i >= (a); i--)
#define ITER(it, a) for(typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a, value) memset(a, value, sizeof(a))

#define ALL(a) a.begin(),a.end()
#define SZ(a) (int) a.size()
#define PB push_back
#define MP make_pair

typedef unsigned long long LL;
typedef vector<int> VI;
typedef pair<int, int> PII;

const double PI = acos(-1.0);
const int INF = 1000 * 1000 *1000 + 7;
const LL LINF = INF * (LL)INF;

const int MAX = 1<<4;

int A[MAX];
char S[MAX];

int C[MAX];

int main()
{
	//freopen("in.txt", "r", stdin);
	//ios::sync_with_stdio(false); cin.tie(0);

	int n, k;
	scanf("%d%d", &n, &k);
	FOR (i, 0, n)
	{
		int x = 0;
		FOR (j, 0, k)
		{
			int y;
			scanf("%d", &y);
			x *= 2;
			x += y;
		}

		A[x] = 1;
	//	cout<<x<<endl;
	}
//	cout<<"--"<<endl;

	FOR (i, 1, 1<<MAX)
	{
		FOR (j, 0, k)
		{
			C[j] = 0;
		}

		int tot = 0;

		FOR (j, 0, MAX)
		{
			if (!A[j] && (i & (1<<j)))
			{
				tot = -1;
				break;
			}
		}

		if (tot == -1) continue;

		FOR (j, 0, MAX)
		{
			if (!(i & (1<<j))) continue;
			tot++;
			FOR (s, 0, k)
			{
				if (j & (1<<s))
				{
					C[s]++;
				}
			}
		}

		bool ok = true;

		FOR (j, 0, k)
		{
			if (C[j] * 2 > tot) ok = false;
		}

		if (ok)
		{
		/*	cout<<i<<endl;
			cout<<tot<<endl;
			FOR (j, 0, k)
			{
				cout<<C[j]<<' ';
			}
			cout<<endl;*/
			cout<<"YES"<<endl;
			return 0;
		}
	}

	cout<<"NO"<<endl;


}

