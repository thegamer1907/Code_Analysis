#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define rint register int
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f, N = 1e5 + 5;
inline int read()
{
    int sum = 0, f = 1;
    char c = getchar();
    while(c>'9'||c<'0') {if(c=='-') f = -f; c = getchar();}
    while(c>='0'&&c<='9') sum = sum*10 + c - 48, c = getchar();
    return sum*f;
}
ll n, m, k, p[N], pre, cnt, now;
int main()
{
 	scanf("%lld%lld%lld",&n,&m,&k);
 	for(int i=1;i<=m;i++) scanf("%lld",&p[i]);
 	for(int i=1;i<=m;)
 	{
 		if(p[i]-pre>now) 
 		{
 			now = (p[i]-pre)/k*k + k;
 			while(now-(p[i]-pre)>k) now -= k;
		}
 		int j = i;
 		while(j<=m&&p[j]-pre<=now) j++;
 		cnt++;
 		pre += j - i;
 		i = j - 1;
	}
	printf("%lld\n",cnt);
	return 0;
}