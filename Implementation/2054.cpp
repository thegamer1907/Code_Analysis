#include <bits/stdc++.h>
// #include "prettyprint.hpp"
using namespace std;

typedef long long int lli;
#define int lli

typedef pair<int, int> pii;
typedef vector<int> vi;

#define debug(x) cout << "debug: " << #x " = " << x << endl
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(x) x.begin(), x.end()

int32_t main(){
	fast_io();

	int n; cin >> n;

	int x=0, y=0, z=0;

	int a;

	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		x += a;
		cin >> a;
		y += a;
		cin >> a;
		z += a;
	}

	if (x == 0 and y == 0 and z == 0)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}

}