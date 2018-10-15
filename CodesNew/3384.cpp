#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <string>
#include <cmath>
#include <functional>
#include <algorithm>
#include <utility>
#include <stack>
#include <unordered_map>
#include <iterator>
#define ll long long 

using namespace std;

int main()
{
	int n, m,min,max; cin >> n >> m;
	vector <int> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	sort(v.begin(), v.end());
	double dopm = m;
	for (int i = 0; i < n-1; ++i)
	{
		dopm -= v[n - 1] - v[i];
	}
	if (dopm < 0) cout << v[n - 1];
	else
	{
		if( dopm/n!=int(dopm/n) ) cout << v[n - 1] + int(dopm/n)+1;
		else cout<< v[n - 1] + int(dopm / n);
	}
	cout << " " << v[n - 1] + m;
	return 0;
}