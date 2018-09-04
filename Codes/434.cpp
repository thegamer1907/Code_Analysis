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

const int MAX = 2e7+1;

void solve()
{
	ll a,b;
	cin>>a;

	int tmp;
	int cur;
	int mn;
	int count = 0;
	for(int i=19;i<MAX;++i)
	{
		tmp = i;
		cur = 0;
		mn = 1;
		while(tmp)
		{
			cur+=tmp%10;
			tmp/=10;
		}
		if(cur==10)
		{
			count++;
			if(count==a)
			{
				cout<<i<<endl;
				return;
			}
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