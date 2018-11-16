#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <map>
#include <algorithm>
#include <fstream>
#include <random>
#include <unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	int res1 = a * b * c;
	int res2 = max(res1, a * b + c);
	int res3 = max(res2, a + b * c);
	int res4 = max(res3, a + b + c);
	int res5 = max(res4, a * (b + c));
	int res6 = max(res5, (a + b) * c);

	cout << res6;
}