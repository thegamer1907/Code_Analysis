#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cmath>
#include <climits>

#include <sstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <utility>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false)

typedef long double ld;
typedef long long ll;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const int max_N = 110;
string D[max_N];

int main()
{
	string target;
	cin >> target;
	int N;
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		cin >> D[i];
	}
	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= N; ++j) {
			string temp = D[i] + D[j];
			for (int k = 0; k + 1 < temp.length(); ++k) {
				if (temp.substr(k, 2) == target) {
					cout << "YES" << endl;
					return 0;
				}
			}
		}
	}

	cout << "NO" << endl;
}
