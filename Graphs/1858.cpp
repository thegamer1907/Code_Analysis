#include <algorithm>
#include <iostream>
#include <iomanip>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <map>
#include <set>
using namespace std;
//#pragma comment(linker,"/STACK:102400000,102400000")

int na, nb;
int a[101], b[101];

int MAIN()
{
	cin >> na;
	for(int i = 1; i <= na; i++)
		cin >> a[i];
	cin >> nb;
	for(int i = 1; i <= nb; i++)
		cin >> b[i];
	sort(a + 1, a + 1 + na);
	sort(b + 1, b + 1 + nb);
	int p = 1, ans = 0;
	for(int i = 1; i <= nb; i++)
	{
		while(p <= na && a[p] < b[i] - 1)
			p ++;
		if(p <= na && abs(a[p] - b[i]) <= 1)
		{
			ans ++;
			p ++;
		}
	}
	cout << ans << endl;
	
	return 0;
}

int main()
{
	#ifdef LOCAL_TEST
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	ios :: sync_with_stdio(false);
	cout << fixed << setprecision(16);
	return MAIN();
}