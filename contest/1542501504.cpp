#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <assert.h>
#include <cstring>
#include <iomanip>
#include <deque>

#define LL long long int
#define N 2005
#define INF 1000000000
#define MOD 1000000007
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int h,m,s,t1,t2;
	int zone1,zone2;
	cin >> h >> m >> s >> t1 >> t2;
	
	if (h==12) h=0;
	if (t1==12) t1=0;
	if (t2==12) t2=0;
	h=(3600*h+60*m+s)*2;
	m=(60*m+s)*24;
	s=6*s*240;
	t1*=7200;
	t2*=7200;
	vector<int> test({h,m,s});
	sort(test.begin(),test.end());
	
	if (t1>test[0] && t1<test[1]) zone1=1;
	else if (t1<test[2] && t1>test[1]) zone1=2;
	else zone1=3;
	if (t2>test[0] && t2<test[1]) zone2=1;
	else if (t2<test[2] && t2>test[1]) zone2=2;
	else zone2=3;
	
	if (zone1==zone2) cout << "YES\n";
	else cout << "NO\n";
	
	return 0;
}
