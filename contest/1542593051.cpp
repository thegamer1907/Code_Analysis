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

const int MAX = 100100;

string A[MAX];

bool isSubstr(string a, string b)
{
	FOR (i, 0, SZ(b))
	{
		bool ok = true;
		FOR (j, 0, SZ(a))
		{
			if (i + j >= SZ(b))
			{
				ok = false;
				break;
			}

			if (b[i+j] != a[j])
			{
				ok = false;
				break;
			}
		}

		if (ok) return true;
	}
	return false;
}

int main()
{
	//freopen("in.txt", "r", stdin);
	//ios::sync_with_stdio(false); cin.tie(0);

	string s;
	cin>>s;

	int n;
	cin>>n;
	FOR(i, 0, n)
	{
		cin>>A[i];
	}

	FOR (i, 0, n)
	{
		FOR (j, 0, n)
		{
			string t = A[i] + A[j];
			if (isSubstr(s, t))
			{
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}

	cout<<"NO"<<endl;


}
