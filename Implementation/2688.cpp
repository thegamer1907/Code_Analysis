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
int ans[1000];
int main ()
{
	int n,x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		ans[x-1] += i+1;
	}
	for (int i = 0; i < n; i++) cout << ans[i]<<' ';
	return 0;
}