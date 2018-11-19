#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	double s1 = s/5.0;
	double m1 = ((double)m+s1/60.0)/5.0;
	double h1 = ((double)h+m1/60.0);
	double e1 = (min(min(h1,m1),s1));
	double e2 = max(max(h1,m1),s1);
	double e3 = h1+m1+s1-e1-e2;
	int flag=0;
	if(t1>e1 && t1<e3 && (t2<e1 || (t2>e1 && t2>e3)))
		flag=1;
	else if (t2>e1 && t2<e3 && (t1<e1 || (t1>e1 && t1>e3)))
		flag=1;
	if(t1>e3 && t1<e2 && (t2<e3 || (t2>e3 && t2>e2)))
		flag=1;
	else if (t2>e3 && t2<e2 && (t1<e3 || (t1>e3 && t1>e2)))
		flag=1;
	if (flag)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	return 0;
}