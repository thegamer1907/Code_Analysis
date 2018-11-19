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
int a[26];int b[26];
int main()
{
	int flag = 0;
	clr(a, 0);clr(b, 0);
	string s;
	cin>>s;
	int n;sd(n);
	while(n--)
	{
		string x;
		cin>>x;
		if(x==s)
			flag = 1;
		b[x[1]-'a'] = 1;
		a[x[0]-'a'] = 1;
	}
	if(b[s[0]-'a'] == 1 && a[s[1]-'a']==1)
		flag = 1;
	if(flag==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
