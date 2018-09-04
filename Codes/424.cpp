#include<bits/stdc++.h>
using namespace std;

inline short int getdigsum(int n)
{
	short int cnt=0;
	while(n)
	{
		cnt += n%10;
		n   /= 10;
	}
	return (cnt==10);
}

int main()
{
	int i=0;
	short int k;
	cin>>k;
	while(k)
	{
	    ++i;
		k -= getdigsum(i);
	}
	cout<<i;
	return 0;
}