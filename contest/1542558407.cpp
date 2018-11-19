#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define ios        	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	long double h,m,s,t,t1;
	cin>>h>>m>>s>>t>>t1;
	long double a,b,c;
	if(m==0&&s==0)
	{
		a=h;
	}
	else
	{
		if(h==12)
		a=.01;
		else
		a=h+.01;
	}
	if(s==0)
	{
		if(m==0)
		b=12;
		else
		b=m/5;
	}
	else
	b=(m/5)+.01;
	if(s==0)
	c=12;
	else
	c=s/5;
	long double d,e,f;
	d=max(a,max(b,c));
	f=min(a,min(b,c));
	if(d==a&&f==b||d==b&&f==a)
	e=c;
	else if(d==b&&f==c||d==c&&f==b)
	e=a;
	else if(d==a&&f==c||f==a&&d==c)
	e=b;
	long double max1,min1;
	max1=max(t,t1);
	min1=min(t,t1);
	//cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<max1<<" "<<min1<<endl;
	if(max1<f)
	cout<<"YES";
	else if(max1<e&&min1>f)
	cout<<"YES";
	else if(max1<d&&min1>e)
	cout<<"YES";
	else if(max1>d&&min1<f)
	cout<<"YES";
	else if(min1>d)
	cout<<"YES";
	else
	cout<<"NO";
}
