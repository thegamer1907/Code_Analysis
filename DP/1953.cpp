#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <cassert>
#include <ctime>

#define nullptr 0
 
#define x first
#define y second
//#define int ll
#define pb push_back
#define mp make_pair
#define sqr(a) ((a) * (a))
 
using namespace std;
 
typedef long long ll;

const int N = 501000;

int ans[N], a[N];

signed main()
{
	srand(time(0));
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	int n, m, x;
	set<int> s;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = n - 1; i >= 0; i--)
	{	
		s.insert(a[i]);
		ans[i] = s.size();
	}	
	for(; m--; )
		cin >> x, cout << ans[x - 1] << '\n';
	return 0;
}		