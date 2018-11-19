#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define m_p make_pair
#define p_b push_back
#define dbg(x) {cout<<#x<<" "<<x<<endl; }


int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	double dh,dm,ds,dt1,dt2,h,m,s,t1,t2;
	int left=0,right=0;
	cin>>h>>m>>s>>t1>>t2;
	dh=2*0.004166667*(h*3600+60*m+s);
	if(dh>360)
	dh-=360;
	dm=0.1*(m*60+s);
	if(dm>360)
	dm-=360;
	ds=6*s;
	if(ds>360)
	ds-=360;
	dt1=2*0.004166667*(t1*3600);
	if(dt1>360)
	dt1-=360;
	dt2=2*0.004166667*(t2*3600);
	if(dt2>360)
	dt2-=360;
	if(dt1>dt2)
	swap(dt1,dt2);
	if(dt1<dh&&dh<dt2||dt1<dm&&dm<dt2||dt1<ds&&ds<dt2)
	left=1;
	if(dt1>dh||dh>dt2||dt1>dm||dm>dt2||dt1>ds||ds>dt2)
	right=1;
//	cout<<dh<<" "<<dm<<" "<<ds<<" "<<dt1<<" "<<dt2<<endl;
	if(left+right==2)
	cout<<"NO";
	else
	cout<<"YES";
	return 0;
}

