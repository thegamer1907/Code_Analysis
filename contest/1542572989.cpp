#include <bits/stdc++.h>
#define int long long
using namespace std;
main()
{
	double h,m,s,t1,t2; cin>>h>>m>>s>>t1>>t2;
	s*=6; m=m*6+s/360; h=h*30+m/360;
	t1*=30; t2*=30;
	if (t1>t2) swap(t1,t2);
	bool check1=true,check2=true;
	if (t1<h&&h<t2||t1<m&&m<t2||t1<s&&s<t2) check1=false;
	if (t1>h||h>t2||t1>m||m>t2||t1>s||s>t2) check2=false;
	if (!check1&&!check2) cout<<"NO";
	else cout<<"YES";
}
