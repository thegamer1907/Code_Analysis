#include <bits/stdc++.h>
using namespace std;
float h,m,s,t1,t2,mid=-1,l=INT_MAX,r=INT_MIN;
bool beetwen(float a,float b,float c)
{
	bool flag=(c>=a && c<=b);
	return flag;
}
void roz()
{
	if (h==12){h=0;}
	if (t1==12){t1=0;}
	if (t2==12){t2=0;}
	m+=(s/60);
	h+=(m/60);
	l=min(min(h,m/5),s/5);
	r=max(max(h,m/5),s/5);
	if (h>l && h<r){mid=h;}
	if (m/5>l && m/5<r){mid=m/5;}
	if (s/5>l && s/5<r){mid=s/5;}
	if (mid==-1){mid=l;}
	
}
int main()
{
	cin >> h >> m >> s >> t1 >> t2;
	roz();
//	cout << l << " " << mid << " " << r << "\n";
	if (beetwen(l,mid,t1) && beetwen(l,mid,t2)){cout << "YES";return 0;}
	if (beetwen(mid,r,t1) && beetwen(mid,r,t2)){cout << "YES";return 0;}
	if ((t1<=l || t1>=r)&&(t2<=l || t2>=r)){cout << "YES";return 0;}
	cout << "NO";
}
