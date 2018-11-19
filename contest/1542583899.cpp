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
	
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	h=h*5;
	
	
	t1*=5;
	t2*=5;
	if(t1==60)t1=0;
	if(t2==60)t2=0;
	if(h==60)h=0;
	
	
	int temp=t1;
	t1=min(t1,t2);
	t2=max(temp,t2);
	
	int arr[61];
	
	for(int i=0;i<61;i++)arr[i]=0;
	
	//clockwise--- 0 to 59
	arr[h]=1;
	arr[m]=1;
	arr[s]=1;
	
	int minc=0,hinc=0;
	
	if(s>0)minc=1,hinc=1;
	if(m>0)hinc=1;
	
	int flag1=0;
	
	
	for(int i=t1;i<=t2;i++)
	{
		if(arr[i]==1)
		{
			flag1=1;
			
			if(i==t2 && i!=s )
			{
				if((i==h && hinc==1)  || (i==m && minc==1))
				{
					flag1=0;
				}
			}
			
			if(flag1==1)break;
		}
	}
	
	
	//flag1==0 ie possible yes
	
	//anticlockwise
	
	int flag2=0;
	
	for(int i=t2;i<60;i++)
	{
		if(arr[i]==1)
		{
			flag2=1;
			
			if(i==t1 && i!=s )
			{
				if((i==h && hinc==1)  || (i==m && minc==1))
				{
					flag2=0;
				}
			}
			
			if(flag2==1)break;
		}
	}
	
	if(flag2==0)
	for(int i=0;i<=t1;i++)
	{
		if(arr[i]==1)
		{
			flag2=1;
			
			if(i==t1 && i!=s )
			{
				if((i==h && hinc==1)  || (i==m && minc==1))
				{
					flag2=0;
				}
			}
			
			if(flag2==1)break;
		}
	}
	
	
	if(flag2==0 || flag1==0)cout<<"YES\n";
	else cout<<"NO\n";
	
	
	
	
	return 0;
}
