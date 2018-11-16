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

int main ()
{
	int n;
	cin >> n;
	int x,y,z,ans1,ans2,ans3;
	ans1 = 0,ans2 = 0, ans3 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x>> y >> z;
		ans1 += x; ans2 += y; ans3 += z;
	}
	if (ans1 == 0 and ans2 == 0 and ans3 == 0) cout << "YES";
	else cout << "NO";
	return 0;
}