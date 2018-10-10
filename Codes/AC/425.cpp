#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll lim  = 1e14+5;
#define MAX 100005

inline short int getdigsum(int n)
{
	int cnt=0;
	while(n)
	{
		cnt += n%10;
		n   /= 10;
	}
	return cnt;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int i=0;
	int k;
	cin>>k;
	while(1)
	{
		k -= (getdigsum(i)==10);
		if(k==0)
		{
			cout<<i;
			return 0;
		}
		++i;
	}
	return 0;
}