//Sagar Kaushal
#include<bits/stdc++.h>
using namespace std;
#define fwd(i,a,b) for(i=a;i<b;i++)
#define rev(i,a,b) for(i=a;i>b;i--)
#define ll long long 
#define vll vector< long long > 
#define vi vector<int> 
#define pb push_back
#define pii pair<int,int> 
#define pll pair< ll , ll >
#define vpll vector< pll >
#define sp(x) x.F>>x.S 
#define F first
#define S second
#define dbl long double
#define str string
#define pdbl pair<dbl,dbl>
#define PI 3.14159265358979323846 
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define slld(t) scanf("%lld",&t)
#define plld(t) printf("%lld\n",t)
#define MOD 1000000007
#define EPS 1e-9
#define gc getchar_unlocked 
#define pc putchar_unlocked
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,m,f,i,x,y,j,k,l,t;
	str a,b;
	cin>>a>>n;
	ll co=0,cc=0;
	while(n--)
	{
		cin>>b;
		if(a==b)
		{
			co=1;
			cc=1;
		}
		if(a[1]==b[0])
			co=1;
		if(a[0]==b[1])
			cc=1;
	}
	if(co+cc==2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;	
}	