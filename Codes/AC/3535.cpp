#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<cmath>
#include<string>
#include<map>

#define N 5000000
const long long int  inf = 1e15 ;
const int M = 1e9+7;

using namespace std;

typedef long long int LL;
typedef pair<LL,LL>pii;
LL n;

int check(LL k)
{
	LL temp=n,cnt=0;
	while(temp>0)
	{
		cnt+=min(k,temp);
		temp-=min(k,temp);
		if(temp >= 10)
			temp-=temp/10;
	}
	return 2*cnt >= n;
}



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	LL l=1,r=n;
	LL mid=0,ans=0;

	while(l <= r)
	{
		mid=(l+r)/2;
		if(check (mid))
		{
			ans=mid;
			r=mid-1;
		}
		else
			l=mid+1;
	}
	cout<<ans<<endl;
	return 0;
}