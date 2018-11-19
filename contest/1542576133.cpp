#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int h,m,s,t1,t2;
	double th,tm,ts,tt1,tt2;
	cin>>h>>m>>s>>t1>>t2;
	if(t1>t2)swap(t1,t2);
	if(m!=0||s!=0)th=h+0.5;
	else th=h;
	if(th>12)th-12;
	tm=m/5.0+s/300.0;
	ts=s/5.0;
	if(t1<=th&&th<=t2&&t1<=tm&&tm<=t2&&t1<=ts&&ts<=t2)
	{
		cout<<"YES"<<endl;
		return 0;
	}	
	if((th<=t1||th>=t2)&&(tm<=t1||tm>=t2)&&(ts<=t1||ts>=t2))
	{
		cout<<"YES"<<endl;
		return 0;
	}
	cout<<"NO"<<endl;
	return 0;	
}