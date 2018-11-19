#include<bits/stdc++.h>
using namespace std;
 
// Numeric Constants
#define MOD 1000000007
#define maxs 250005
#define mins 1005
#define eps 0.000000000001
#define pi 3.141592653589793
 
// Others
#define ll long long int
#define pb push_back
#define iosbase ios_base::sync_with_stdio(false)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define ppi pair<pair<int,int>,int>
#define ppl pair<pll,ll>
#define vi vector<int>
#define F first
#define S second
#define siter set<int>::iterator
#define p_pq priority_queue
#define ub upper_bound
#define lb lower_bound



int main()
{
	ll h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	long double tt1,tt2;
	long double hh,mm,ss,tt;

	if(h==12)
		h=0;
	if(t1==12)
		t1=0;
	if(t2==12)
		t2=0;

	tt1=t1*30.0;
	tt2=t2*30.0;

	hh=h*30.0+m*0.5+s*(0.5/60.0);
	mm=m*6.0+s*(5.0/60.0);
	ss=s*6.0;

	// cout<<hh<<" "<<mm<<" "<<ss<<endl;
	// cout<<tt1<<" "<<tt2<<endl;
	vector<long double> v;
	v.pb(hh);
	v.pb(ss);
	v.pb(mm);
	sort(v.begin(),v.end());

	ll fl1=3;
	ll fl2=3;
	if(tt1>v[0] && tt1 <v[1])
		fl1=1;
	else if(tt1>v[1] && tt1 <v[2])
		fl1=2;

	if(tt2>v[0] && tt2 <v[1])
		fl2=1;
	else if(tt2>v[1] && tt2 <v[2])
		fl2=2;

	if(fl1==fl2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}