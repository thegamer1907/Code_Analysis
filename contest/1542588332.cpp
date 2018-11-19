#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	bool f1=1,f2=1;
	if (t1>t2) swap(t1,t2);
	t1*=3600;
	t2*=3600;
	h=h*3600+m*60+s;
	m=720*m+12*s;
	s=720*s;
	if (h>t1 && h<t2) f1=0;
	if (m>t1 && m<t2) f1=0;
	if (s>t1 && s<t2) f1=0;
	if (h>t2) f2=0;
	if (m>t2) f2=0;
	if (s>t2) f2=0;
	if (h<t1) f2=0;
	if (m<t1) f2=0;
	if (s<t1) f2=0;
	if (f1 || f2) cout<<"YES"<<endl;else cout<<"NO"<<endl;
	return 0;
}