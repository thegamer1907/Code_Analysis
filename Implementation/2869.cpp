#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <cmath>

using namespace std;

#define FOR(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define REP(i, n) FOR(i, 0, n)
#define ALL(a) a.begin(),a.end()
#define pb push_back
#define mp make_pair
#define ll long long
#define x first
#define y second
#define pii pair<int,int>

int main() {
	
	ios::sync_with_stdio(false);
	string s;
	getline(cin, s);
	set<char> chars;
	REP(i,s.size()) if (s[i] >= 'a' && s[i] <= 'z') chars.insert(s[i]);
	cout << chars.size() << endl;
	return 0;
}

