#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <map>
#include <math.h>
#include <cmath>
#include <queue>
#include <iomanip>
#include <bitset>
#include <unordered_map>
#include <stack>

#define ll long long
#define ld long double
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define pii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define forn(it,from,to) for(int (it)=from; (it)<to; (it)++)
const ll  Inf = 2 * 1e15;
const ll  mod = 1e9 + 7;
using namespace std;
#define M_PI       3.14159265358979323846   // pi
vector<int> chsum;
int n;
int getpos(int x) {
	int l = 0, r = n;
	while (r - l > 1) {
		int m = (l + r) >> 1;
		if (chsum[m] > x) r = m;
		else l = m;
	}
	if (chsum[l] >= x) return l;
	return r;
}

int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#else
	//freopen("hard.in", "r", stdin);
	//freopen("hard.out", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	
	cin >> n;
	chsum.resize(n + 1, 0);
	forn(i, 0, n) {
		int tmp;
		cin >> tmp;
		chsum[i + 1] = chsum[i] + tmp;
	}
	int m;
	cin >> m;
	forn(i, 0, m) {
		int x;
		cin >> x;
		cout << getpos(x) << endl;
	}
	return 0;
}