// author - "algomatrix"
#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>

#define ld          long double
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define mod        1000000007
#define endl        '\n'
#define loop(i,a,b)	for(int i=a;i<b;i++)
using namespace std;
bool check(ll n,ll k)
{
	ll tmp = n;
	ll cnt = 0;
	while(tmp!=0)
	{
		if(tmp<=k)
		{
			cnt += tmp;
			break;
		}
		else
		{
			cnt += k;
			tmp -= k;
			tmp -= tmp/10;
		}
	}
	if(n%2 == 0 && cnt>=n/2)
	return true;
	if(n%2 == 1 && cnt>n/2)
	return true;
	return false;
}
void solve()
{
	ll n;
	cin>>n;
	ll l = 1,r = n;
	//cout<<check(68,3)<<endl;
	while(l<r)
	{
		ll mid = l+(r-l)/2;
		if(check(n,mid) == true)
		{
			r = mid;
		}
		else
		{
			l = mid+1;
		}
	}
	cout<<r<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
