#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>
#include <string>
#include <stdio.h>
#include <fstream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <queue>
#include <map>
#include <cmath>
#include <stack>
//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------
using namespace std;
const int maxn = int(1e9 + 9);
ifstream fin("input.txt");
ofstream fout("ofput.txt");
using namespace std;
bool rev(long long l, long long r)
{
	return l > r;
}

//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------

string str;
bool check(string a, string b)
{
	string s = str;
	int pos = s.find(a);
	if (pos == -1) return false;
	else {
		s[pos] = s[pos + 1] = '#';
		pos = s.find(b);
		if (pos == -1) return false;
		else return true;
	}
}
signed main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
#endif
	cin >> str;
	if (check("AB", "BA") || check("BA", "AB"))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}