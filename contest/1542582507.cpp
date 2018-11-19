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
	ll n,m,f,i,x,z,y,j,k,l,t;
	str a,b;
	cin>>n>>k;
	bool flag=false;
	set<str> se;
	str st="";
	fwd(i,0,k)
		st+="0";
	fwd(i,0,n)
	{
		a="";
		fwd(j,0,k)
		{
			cin>>b;
			a+=b;
		}	
		if(a==st)
			flag=true;
		se.insert(a);
	}
	vector<str> v;
	for(auto it:se)
	{
		v.pb(it);
	}
	fwd(i,0,v.size())
	{
		fwd(j,i+1,v.size())
		{
			bool flag1=true;
			fwd(l,0,k)
			{
				if(v[i][l]==v[j][l]&&v[i][l]=='1')
				{
					flag1=false;
				}
			}
			flag=flag|flag1;	
		}
	}
	if(flag)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;	
}	