#include <iostream>
#include <sstream>
#include <algorithm>
#include <queue>
#include <string>
#include <cstring>
#include <set>
#include <list>
#include <cmath>
#include <iterator>
#include <numeric> 
#include <regex>
#include <map>
#include <limits>
#include <iomanip> 
#include <bitset>
#include <unordered_map>

using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<int32_t> diff;
	vector<int32_t> res;
	diff.push_back(0);
	int32_t c = 0;
	for (int32_t i = 1; i < s.length(); i++)
	{
		if (s[i] == s[i - 1]) {
			c++;
		}
		diff.push_back(c);
	}
	// #..###
	// 001123

	int32_t m;
	cin >> m;
	
	for (size_t i = 0; i < m; i++)
	{
		int32_t l, r;
		cin >> l >> r;
		res.push_back(diff[r - 1] - diff[l - 1]);
	}

	for (auto r : res) {
		cout << r << endl;
	}
}

