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
int main()
{
	int n,k;
	sd2(n,k);
	int a[16];
	clr(a, 0);
	int flag = 0;
	for(int i=0;i<n;i++)
	{
		int x = 0;
		for(int j=0;j<k;j++)
		{	
			int y;
			sd(y);
			x = x*2+y;
		}
		a[x] = 1;
	}
	for(int i=0;i<16;i++)
		for(int j=0;j<16;j++)
			if(a[i] && a[j] && ((i&j)==0))
				flag = 1;
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");
}
