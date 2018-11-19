#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define sd(a) scanf("%d", &a)
#define sd2(a,b) scanf("%d%d", &a, &b)
#define sd3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define sld(a) scanf("%lld", &a)
#define sld2(a,b) scanf("%lld%lld", &a, &b)
#define sld3(a, b, c) scanf("%lld%lld%lld", &a, &b, &c)
#define pd(a) printf("%d", a)
#define pld(a) printf("%lld", a)
#define sp printf(" ")
#define nl printf("\n")
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
#define clr(a, val) memset((a), (val), sizeof(a))
#define pb push_back
#define endl "\n"
#define mp(a, b) make_pair(a, b)
#define pii pair<int, int>
#define xx first
#define yy second
#define mx 100001
int h, m, s;
/*int p(int x)
{
	int ho = h*5;
	char cl;
	if(
}*/
int main()
{
	sd3(h,m,s);
	int t,r;
	sd2(t,r);
	h*=5;
	t *=5;r*=5;
	int flag = 0;
	int r0 = max(r, t);
	int t0 = min(r, t);
	r = r0;t = t0;
		if((m<r && m>=t) && (s<r && s>t) && (h<r && h>=t))
			flag = 1;
		else
		{
			if(!(m<r && m>=t) && !(s<r && s>t) && !(h<r && h>=t))
				flag = 1;
		}
		if(flag == 1)
			cout<<"YES\n";
		else 
			cout<<"NO\n";
}
