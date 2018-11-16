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

	string s;
	cin >> s;
	int n = s.length(), i, j, k, a, b;
	
	bool solved = false;

	a = s.find("AB");
	if (a != string::npos) {
		b = s.substr(a + 2).find("BA");
		if (b != string::npos) solved = true;
	}
	
	a = s.find("BA");
	if (a != string::npos) {
		b = s.substr(a + 2).find("AB");
		if (b != string::npos) solved = true;
	}

	if (solved) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}
