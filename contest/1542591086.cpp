/*  chuckie   */
#include <bits/stdc++.h>
//#include "/usr/local/include/bits/stdc++.h"
//#define CHUCKIE
 
 
#define cint(d) scanf("%d", &d)
#define cint2(a, b) scanf("%d %d", &a, &b)
#define cint3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define cint4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)
 
#define clong(d) scanf("%lld", &d)
#define clong2(a, b) scanf("%lld %lld", &a, &b)
#define clong3(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define clong4(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
 
const int MOD = 1000000007;
const int MOD2 = 1000000009;
#define MODSET(d) if ((d) >= MOD) d %= MOD;
#define MODR(d) ((d)>=MOD?(d)%MOD:(d))
#define MODNEGSET(d) if ((d) < 0) d = ((d % MOD) + MOD) % MOD;
#define MODADDSET(d) if ((d) >= MOD) d -= MOD;
#define MODADDWHILESET(d) while ((d) >= MOD) d -= MOD;
 
#define MAX 1000000
#define ll long long
#define mp make_pair
#define pb push_back
#define pi acos(-1)
#define NIL -1
#define fi first
#define se second 
 
using namespace std;
 
typedef vector<int> vi;
typedef vector< vi > vvi;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef pair<double,double> dd;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector< ii > vp;
typedef vector< vp > vvp;
#define EPS 1e-9
#define PI acos(-1)


 
int main()
{
		
	#ifdef CHUCKIE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	/////////////  code starts here ////////////////i
	
	string s;
	cin>>s;
	
	char a1=s[0];
	char a2=s[1];
	
	int n;
	cin>>n;
	
	int a1f=0,a1b=0,a2f=0,a2b=0,flag=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>s;
		
		if(s[0]==a1)
		{
			a1f=1;
		}
		if(s[0]==a2) a2f=1;
		
		if(s[1]==a1)a1b=1;
		
		if(s[1]==a2)a2b=1;
		
		if(s[0]==a1 && s[1]==a2)
		flag=1;
		
	}
	
	if(flag)cout<<"YES\n";
	else if(a1b==1 && a2f==1)cout<<"YES\n";
	else cout<<"NO\n";
	
	return 0;
}