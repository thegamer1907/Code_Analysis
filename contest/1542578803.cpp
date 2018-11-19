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

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PII;

const double PI = acos(-1.0);
const int INF = 1000 * 1000 *1000 + 7;
const LL LINF = INF * (LL)INF;

const int MAX = 222;

const int MAGIC = 20;

char A[MAX][1<<MAGIC];
int K[MAX];

string B[MAX];
string E[MAX];

int getK(int ind)
{
	//cout<<"!!! "<<ind<<endl;
	int k = K[ind];
	//cout<<k<<endl;
	FOR (i, k+1, MAGIC )
	{
		//cout<<"@ "<<i<<endl;
		bool ok = true;
		FOR (j, 0, (1<<i))
		{
			int mask = j | (1<<i);
			if (!A[ind][mask]) ok = false;
		//	cout<<mask<<' '<<(int)A[ind][mask]<<endl;
		}

		if (!ok) return i-1;
	}

	return MAGIC - 1;
}

void add(string s, int ind)
{
	//cout<<s<<' '<<ind<<endl;
	FOR (j, 0, SZ(s))
	{
		int x = 1;
		FOR (k, j, SZ(s))
		{
			x *= 2;
			x += s[k] - '0';
			if (x >= (1<<MAGIC)) break;
		//	cout<<"!! "<<x<<endl;
			A[ind][x] = 1;
		}
	}
}


int main()
{
	//freopen("in.txt", "r", stdin);
	//ios::sync_with_stdio(false); cin.tie(0);

	int n;
	cin>>n;
	FOR (i, 0, n)
	{
		string s;
		cin>>s;

		B[i] = E[i] = s;

		while(SZ(B[i]) > MAGIC) B[i].erase(B[i].begin() + SZ(B[i]) - 1);
		while(SZ(E[i]) > MAGIC) E[i].erase(E[i].begin());
		add(s, i);

		K[i] = getK(i);
		//cout<<"===> "<<i<<": "<<K[i]<<endl;
	}
	//cout<<endl;

	int m;
	cin>>m;
	FOR (i, 0, m)
	{
		int x, y;
		cin>>x>>y;
		x--;
		y--;

		int ind = i + n;

		string s = E[x] + B[y];

		B[ind] = B[x];
		E[ind] = E[y];

		FOR (i, 0, SZ(B[y]))
		{
			if (SZ(B[ind]) >= MAGIC) break;
			B[ind] += B[y][i];
		}

		RFOR(i, SZ(E[x]), 0)
		{
			if (SZ(E[ind]) >= MAGIC) break;
			E[ind] = E[x][i] + E[ind];
		}

//cout<<"*"<<endl;
//cout<<x<<' '<<y<<endl;

		FOR (j, 0, 1<<MAGIC)
		{
			A[ind][j] = A[x][j] | A[y][j];
		}

	//	cout<<"*"<<endl;
		//cout<<s<<endl;
		add(s, ind);

		K[ind] = max(K[x], K[y]);
		K[ind] = getK(ind);

		cout<<K[ind]<<endl;
		//break;

	}

}


