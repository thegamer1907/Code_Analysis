#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstring>
#include <cstdlib>
#include <set>
#include <queue>
#include <vector>
#include <map>
#include <deque>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef unsigned U;

#define rep(i, a, b) for(int i = a; i <= b; ++i)
#define dow(i, a, b) for(int i = a; i >= b; --i)
#define mem(a) memset(a, 0, sizeof(a))
#define mst(a, b) memset(a, b, sizeof(a))
#define sfi(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define sfd(a) scanf("%lf", &a)
#define sfs(a) scanf("%s", &a)
#define sfu(a) scanf("%llu", &a)
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()

const int MAX = 1e5 + 10;
const LL MOD = 998244353;
const int INF = 0x3f3f3f3f;

int s[MAX];

int main()
{
#ifdef LOCAL
	//~ freopen("in.txt", "r", stdin );
	//~ freopen("out.txt", "w", stdout);
#endif

	int n;
	while(~sfi(n))
	{
		mem(s);
		rep(i, 1, n)
		{
			int tmp;
			sfi(tmp);
			int now = (tmp + 1) % n;
			if(now == 0 && i == n)
				s[i] = (tmp + 1) / n;
			else if(now <= i)
				s[i] = (tmp + 1) / n + 1;
			else
				s[i] = (tmp + 1) / n + 2;
		}
		
		//~ rep(i, 1, n)
		//~ {
			//~ printf("%d%c", s[i], i == n ? '\n' : ' ');
		//~ }
		
		int mx = INF, idx = 1;
		rep(i, 1, n)
		{
			if(s[i] < mx)
			{
				mx = s[i], idx = i;
			}
		}
		printf("%d\n", idx);
		
	}
	
	return 0;
}
