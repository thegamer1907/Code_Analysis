#include <iostream>
#include <string>
#include <sstream>
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <bitset>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long a, b, i, ans;

	cin >> a >> b;
	bool diff = false;
	ans = 0;
	for (i = 62; i >= 0; i--) {
		if (diff) ans += 1LL << i;
		else {
			if (((1LL << i) & a) != ((1LL << i) & b)) {
				diff = true;
				ans += 1LL << i;
			}
		}
	}

	cout << ans << "\n";


	return 0;
}
