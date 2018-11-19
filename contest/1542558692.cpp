#include <bits/stdc++.h>

using namespace std;
long double h,q,t1,t2;
int x=0,s,m,u=0,k=0,o=0;
int main()
{
	cin >> h >> m >> s >> t1 >> t2;
	x=m*60+s;
	q=5*x;
	q/=3600;
	if(h==12)
		h=0;
	h*=5;
	h+=q;
	if(t1==12)
		t1=0;
	if(t2==12)
		t2=0;
	t1*=5;
	t2*=5;
	x=0;
	if(t1==h || t1==m || t1==s)
		o=1;
	if(t2==h || t2==m || t2==s)
                u=1;
	if(o==1 && u==1)
	{
		cout << "NO";
		return 0;
	}
	if(t1>t2)
		swap(t1,t2);
	if(t1<=h && t2>h)
                x++;
        if(t1<=m && t2>m)
                x++;
	if(t1<=s && t2>s)
                x++;
	//cout << x << endl;
	if(x==0 || x==3)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}