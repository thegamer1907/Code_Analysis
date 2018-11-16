#include <iostream>
#include <istream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <cstring>
#include <string.h>
#include <iomanip>
#include <queue>
#include <stack>
#include <complex>
#include <list>
using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> PII;
typedef vector<int> VI;

#define ALL(V) V.begin(), V.end()
#define SZ(V) (int)V.size()
#define PB push_back
#define MP make_pair
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define RFOR(i, b, a) for(int i = (b) - 1; i >= (a); --i)
#define FILL(A,value) memset(A,value,sizeof(A))
#define f first
#define s second

const int INF = 1000*1000*1000;
const LL LINF = (LL)INF*INF;
const int MAX = 2e5;
const double EPS = 1e-9;
const double PI = acos(-1.);

LL n;
int a[1000005], b[1000005];


int main()
{
	ios_base::sync_with_stdio(0);
	cin >> n;
	FOR(i,0,n)
	{
		char ch;
		cin >> ch;
		a[i] = ch-'0';
	}
	FOR(i,0,n)
	{
		char ch;
		cin >> ch;
		b[i] = ch-'0';
	}
	int ans = 0;
	FOR(i,0,n)
	{
		if (i != n-1 && a[i] != a[i+1] && b[i] != b[i+1] && a[i] != b[i])
		{
			i++;
			ans+=1;
			continue;
		}
		if (a[i] != b[i])
		{
			ans++;
			continue;
		}
	}
	cout << ans << endl;
	return 0;
}