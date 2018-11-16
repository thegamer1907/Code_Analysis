#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#define ll long long
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, a, b;
	cin >> n >> a >> b;
	a--;
	b--;
	int k = 2;
	int r = 1;
	while ((a / k) != (b / k))
		r++, k*= 2;
	if (k != n)
		cout << r;
	else
		cout << "Final!";
	return 0;
}