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

const int MAX = 12*60*60;

int A[MAX];

int getH(int h, int m, int s)
{
	return (h * 60 + m) * 60 + s;
}

int getM(int m, int s)
{
	int M =  m * 60 + s;
	return M * 12;
}

int getS(int s)
{
	int S = s;
	return S * 12 * 60;
}

bool canGet(int x, int y)
{
	while(x != y)
	{
		if (A[x]) return false;
		x++;
		if (x == MAX) x = 0;
	}
	return true;
}

int main()
{
	//freopen("in.txt", "r", stdin);
	//ios::sync_with_stdio(false); cin.tie(0);

	int h, m, s, t1, t2;
	cin>>h>>m>>s>>t1>>t2;

	if (h == 12) h = 0;
	if (t1 == 12) t1 = 0;
	if (t2 == 12) t2 = 0;

/*	cout<<getH(h, m, s)<<endl;
	cout<<getM(m, s)<<endl;
	cout<<getS(s)<<endl;

	cout<<getH(t1, 0, 0)<<endl;
	cout<<getH(t2, 0, 0)<<endl;*/

	A[getH(h, m, s)] = 1;
	A[getM(m, s)] = 1;
	A[getS(s)] = 1;

	int T1 = getH(t1, 0, 0);
	int T2 = getH(t2, 0, 0);

	if (canGet(T1, T2) || canGet(T2, T1)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

