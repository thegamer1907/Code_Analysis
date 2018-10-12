#include<bits/stdc++.h>
using namespace std;

#define rep(i,k,n) for(int i=k;i<=n;i++)
#define ll long long
#define elif else if
#define ff first
#define ss second
#define pii pair<ll int,ll int>
#define mp make_pair
#define pb push_back
#define CLEAR(array, value) memset(ptr, value, sizeof(array));
#define si(a)     scanf("%d", &a)
#define sl(a)     scanf("%lld", &a)
#define pi(a)     printf("%d", a)
#define pl(a)     printf("%lld", a)
#define sll2(m,n) scanf("%lld%lld",&(m),&(n))
#define sll3(m,n,o) scanf("%lld%lld%lld",&(m),&(n),&(o))
#define sll4(m,n,o,p) scanf("%lld%lld%lld%lld",&(m),&(n),&(o),&(p))
#define sdd(n) scanf("%lf",&(n))
#define sdd2(m,n) scanf("%lf%lf",&(m),&(n))
#define sdd3(m,n,o) scanf("%lf%lf%lf",&(m),&(n),&(o))
#define sdd4(m,n,o,p) scanf("%lf%lf%lf%lf",&(m),&(n),&(o),&(p))
#define pn        printf("\n")
#define s(a) sort(a.begin(),a.end())
# define INF 0x3f3f3f3f
int main()
{
	int n,m,count=0;
	cin>>n>>m;
	vector<string> v1,v2;
	map<string,int> mymap;
	rep(i,0,n-1)
	{
		string g;
		cin>>g;
		mymap[g]=1;
		v1.pb(g);
	}
	rep(i,0,m-1)
	{
		string g;
		cin>>g;
		if(mymap.find(g)!=mymap.end())
			count++;
		v2.pb(g);
	}
	if((n>m))
	{
		cout<<"YES";
		return 0;
	}
	else if(n<m)
	{
		cout<<"NO";
		return 0;
	}
	else if((n+m-count)%2==0)
		cout<<"NO";
	else
		cout<<"YES";

}