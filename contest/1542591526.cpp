#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <cstdlib>
#include <stdio.h>
#include <functional>

using namespace std;

typedef long long ll;
typedef long double ld;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s, p;
	int h = 0, r = 0, y = 0;
	vector <int> pp, rr;
	int n;
	cin >> s >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		if (s == p) y = 1;
	
		if (s[1] == p[0]) pp.push_back(i);
		if (s[0] == p[1]) rr.push_back(i);
	}
	if (y == 1) cout << "YES";
	else if (pp.size() == 0 || rr.size() == 0)
		cout << "NO"; else
		cout << "YES";
	//system("pause");
	return 0;
}