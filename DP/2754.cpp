#include <bits/stdc++.h>
using namespace std;
double dis(int x1, int y1, int x2, int y2)
{
	return sqrt(1.0*(x1-x2)*(x1-x2)+1.0*(y1-y2)*(y1-y2));
}
int main()
{
	int n;
	cin>>n;
	int ans=0;
	ans+=n/100;
	n=n%100;
	ans+=n/20;
	n=n%20;
	ans+=n/10;
	n=n%10;
	ans+=n/5;
	n=n%5;
	ans+=n;
	cout<<ans;
	return 0;
}