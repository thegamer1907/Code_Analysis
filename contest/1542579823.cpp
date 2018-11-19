#include<bits/stdc++.h>
#include <math.h>
using namespace std;
 
#define MOD 1000000007
#define ll long long
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define sld(t) scanf("%ld",&t)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define pcc pair<char,char>
#define pp pair<int,int>
#define pll pair<ll,ll>
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define mp(a,b) make_pair(a,b)
#define F first
#define S second
#define pb(x) push_back(x)

vector <double> v;
int main()
{
	double h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	double x = m + (s/60.0);
	//cout<<x<<endl;
	double sa = s*6.0;
	double ma = x*6.0;
	double ha = h + (x/60.0);
	ha *= 30;
	double a1 = 30.0*t1;
	double a2 = 30.0*t2;
	if(ha>=360)
	{
		ha -= 360;
	}
	v.pb(sa); v.pb(ma); v.pb(ha);
	sort(v.begin(),v.end());
	bool f = 0;
	if(a1>a2)
	{
		double temp = a1;
		a1 = a2;
		a2 = temp;
	}
//	cout<<sa<<" "<<ma<<" "<<ha<<" "<<a1<<" "<<a2<<endl;
/*	for( int i=0; i<=2; i++)
	{
		cout<<v[i]<<" ";
	}*/
	if(a1>v[0] && a2<v[1])
	{
		f = 1;
	}
	if(a1>v[1] && a2<v[2])
	{
		f = 1;
	}
	if(a1<v[0] && a2>v[2])
	{
		f = 1;
	}
	if(a1>v[2] || a2<v[0])
	{
		f = 1;
	}
	if(f)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}