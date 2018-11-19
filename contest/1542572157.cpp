//868B
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	int tLow = min(t1,t2);
	int tHigh = max(t1,t2);
	int minLow = tLow*5;
	int minHigh = tHigh*5;
	if ((h<tLow || h >=tHigh)&&
		(m<minLow || m >= minHigh)&&
		(s<minLow || s > minHigh))
	{
		cout<<"YES\n";
	}
	else if ((h>=tLow && h<tHigh)&&
		(m>=minLow && m<minHigh)&&
		(s>minLow && s<minHigh))
	{
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
	return 0;
}