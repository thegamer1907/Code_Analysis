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
#include <memory.h>

#define ll long long
#define ld long double
#define ull unsigned ll
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define pii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define forn(it,from,to) for(int (it)=from; (it)<to; (it)++)
const int  Inf = 1e9;
ll LINF = (ll)4e18;
using namespace std;
ll mod = 1e9 + 7;
#define M_PI       3.14159265358979323846   // pi

int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#else
	//freopen("cities.in", "r", stdin);
	//freopen("cities.out", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	ll a, b;
	cin >> a >> b;
	int ans = 0;
	while (a <= b) {
		ans++;
		a *= 3;
		b *= 2;
	}
	cout << ans;
	return 0;
}