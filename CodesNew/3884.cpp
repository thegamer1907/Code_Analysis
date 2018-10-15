//#include <bits/stdc++.h>
//#include <algorithm>
//#include <cstdio>
//#include <functional>
#include <iostream>
//#include <cfloat>
//#include <climits>
//#include <cstdlib>
//#include <cstring>
//#include <cmath>
//#include <map>
//#include <queue>
//#include <set>
//#include <sstream>
//#include <stack>
//#include <string>
//#include <time.h>
//#include <vector>
//#include <random>
//#include <unordered_set>
//#include <complex>
//#include <string.h>
#define rt0 return 0
#define rep(i,n) for(int i=0;i<n;i++)
#define LL long long
#define pii pair<int,int>
#define pb push_back
using namespace std;
const LL MOD=1e9+7;
LL a[100010],n,mx,sum,ans;
bool check(LL x)
{
	LL ret=0;
	if(x<mx) return 0;
	rep(i,n)
	{
		if(a[i]>x) return 0;
	}
	return 1;
}
int main()
{
	cin>>n;
	rep(i,n) cin>>a[i],sum+=a[i];
	mx=(sum+n-2)/(n-1);
	LL lft=0,rit=2*1e9+10;
	while(lft<rit-1)
	{
		LL mid=(lft+rit)/2;
		if(check(mid))
		{
			rit=mid;
			ans=mid;
			//cout<<ans<<endl;
		}
		else lft=mid;
	}
	cout<<ans<<endl;
	//cout<<endl<<check(3)<<endl<<mx;
    rt0;
}