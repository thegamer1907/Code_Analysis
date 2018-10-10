#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <unordered_set>
#include <cmath>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int a_count = 0;
	int b_count = 0;
	int c_count = 0;

	for (size_t i = 0; i < s.size(); ++i) {
		if (s[i] == 'B') ++a_count;
		if (s[i] == 'S') ++b_count;
		if (s[i] == 'C') ++c_count;
	}

	int a, b, c;
	cin >> a >> b >> c;

	int pa, pb, pc;
	cin >> pa >> pb >> pc;

	long long res;
	cin >> res;

	long long l = 0;
	long long r = 1e15;

	while (r - l > 1) {
		long long m = (l + r) >> 1;

		long long first = (max(m * a_count - a, 0LL)) * pa;
		long long second = (max(m * b_count - b, 0LL)) * pb;
		long long third = (max(m * c_count - c, 0LL)) * pc;

		if (first + second + third <= res) l = m;
		else r = m;
	}

	cout << l << endl;

	return 0;
}