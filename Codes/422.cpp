#include<bits/stdc++.h>
using namespace std;

inline int getdigsum(int n)
{
	int cnt=0;
	while(n)
	{
		cnt += n%10;
		n   /= 10;
	}
	return (cnt==10);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int i=0;
	int k;
	int r=0;
	cin>>k;
	while(k!=r)
	{
	    ++i;
		r += getdigsum(i);
	}
	cout<<i;
	return 0;
}