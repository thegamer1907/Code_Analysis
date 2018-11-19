#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007
#define all(v) v.begin(),v.end()
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	//float p1,p2,p3; 
	//ll f1=0,f2=0,f3=0;
	ll a=min(t1,t2),b=max(t1,t2);
	float p1,p2,p3;
	ll x=m*60+s;
	p1=h*30+(x*0.5)/60;
	p2=x*0.1;
	p3=s*6;
	p1=(p1*12)/360;
	p2=(p2*12)/360;
	p3=(p3*12)/360;
	//cout<<p1<<" "<<p2<<" "<<p3<<endl;
	if((p1>a and p2>a and p3>a and p1<b and p2<b and p3<b) or ((p1<a or p1>b) and (p2<a or p2>b) and (p3<a or p3>b)))
	{
		cout<<"YES"<<endl;
		return 0;
	}
	cout<<"NO"<<endl;
	return 0;	
}