#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
#define pb push_back
#define pd pop_back
typedef long long ll;
typedef long double ld;
int w;
int main ()
{
	int n,x,y;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		w -= x; w += y;
		ans = max(ans,w);
	}
	cout << ans;
	return 0;
}