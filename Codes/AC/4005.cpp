#if 1

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <queue>
#include <stack>
#include <string.h>
#include <math.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

void solve()
{
	ll a,b;
	cin>>a>>b;

	vector<vector<int>> x(a+1,vector<int>(b+1));
	auto dp = x;

	for(int i=1;i<=a;++i)
	{
		for(int j=1;j<=b;++j)
		{
			cin>>x[i][j];
			dp[i][j]=(x[i][j]>=x[i-1][j])*dp[i-1][j]+1;
		}
	}

	for(int i=1;i<=a;++i)
	{
		ll mx = 0;
		for(int j=b;j>0;--j)
		{
			mx=max(mx,(ll)dp[i][j]);
		}
		dp[i][0]=mx;
	}

	ll c;
	cin>>c;
	int l,r;
	while(c--)
	{
		cin>>l>>r;

		if(dp[r][0]>=r-l+1)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}

#define name "strings"

int main() {
	//ios_base::sync_with_stdio(false);
	//freopen(name".in","r",stdin); freopen(name".out","w",stdout);
	//freopen("segment.txt","r",stdin); freopen("tracks.txt","w",stdout);
	//freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	cout.setf(ios::fixed);
	cout.precision(9);
	solve();

	return 0;
}
#endif