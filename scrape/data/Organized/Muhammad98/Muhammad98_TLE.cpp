#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <functional>
#include <numeric>
using namespace std;
#define all(v) (v).begin(),(v).end()
#define SRT(v) sort(all(v))
#define rall(v) (v).rbegin(),(v).rend()
#define rSRT(v) sort(rall(v))
#define sz(a) int((a).size())
#define watch(x) cout<<(#x)<<" = "<<x;
#define MP make_pair
#define sc(x) scanf("%d", &(x))
#define sclld(x) scanf("%lld", &(x))
#define pf(x) printf("%d", (x))
#define pflld(x) printf("%lld", (x))
typedef long long ll;
typedef pair<int,int> ii;
const ll Mod = 1e9+7;
const double pi = 2*acos(0.0);

const int N = 1e5+5;
ll arr[N];

int main()
{
	ll n, m, k;
	scanf("%lld%lld%lld", &n, &m, &k);
	for (int i = 0; i < m; i++)
	{
		sclld(arr[i]);
	}
	ll r = k, ans = 0;
	for (int i = 0; i < m; )
	{
		int cnt = 0;
		while (i<m && arr[i]<=r)
		{
			
			cnt++;
			i++;
		}
		r += cnt;
		if(i<m && arr[i]>r)
			r += ((arr[i]-r)/k)*k;
		r = min(r, n);
		if(cnt)
			ans++;
	}
	printf("%lld", ans);
	return 0;
}