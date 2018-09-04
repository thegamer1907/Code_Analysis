#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <queue>
#include <bitset>
#include <stack>
#include <unordered_set>
#include <unordered_map>
using namespace std;

#define all(v) (v).begin(),(v).end()
#define SRT(v) sort(all(v))
#define rall(v) (v).rbegin(),(v).rend()
#define rSRT(v) sort(rall(v))
#define sz(a) int((a).size())
#define PB push_back
#define trav(c,i) for(typeof((c).begin()i=(c).begin();i!=(c).end();i++)
#define mem(a, b) memset(a, b, sizeof(a))
#define MP make_pair
#define EPS 1e-9
#define Mod (ll)1e9+7
#define oo (int)1e9
#define OO 1e14*1LL
#define PI 3.141592653589793
#define F first
#define S second
#define pw(x)	(x)*(x)

typedef stringstream ss;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<long long> vll;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii>vii;
typedef pair<int, ll> il;
typedef vector<vector<ii>> vvii;
typedef vector<vector<il>> vvil;

//ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
//ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
//int dcmp(double x, double y) { return fabs(x - y) <= EPS ? 0 : x < y ? -1 : 1; }

//char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m'
//                   ,'n','o','p','q','r','s','t','u','v','w','x','y','z'};
//const int dx[] = { 0, -1, 0, 1, -1, -1, 1, 1 };
//const int dy[] = { 1, 0, -1, 0, 1, -1, 1, -1 };

int n[3], p[3], rec[3]; ll r;  // b c s

bool ican(ll sand)
{
	ll b = sand*rec[0] - n[0] < 0 ? 0 : sand*rec[0] - n[0];
	ll c = sand*rec[1] - n[1] < 0 ? 0 : sand*rec[1] - n[1];
	ll s = sand*rec[2] - n[2] < 0 ? 0 : sand*rec[2] - n[2];
	ll tot = b*p[0] + c*p[1] + s*p[2];
	return tot <= r;
}

int main()
{
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);
	string str; cin >> str;	
	rec[0] = count(str.begin(), str.end(), 'B');
	rec[1] = count(str.begin(), str.end(), 'C');
	rec[2] = count(str.begin(), str.end(), 'S');
	scanf("%d %d %d", &n[0], &n[2], &n[1]); 
	scanf("%d %d %d", &p[0], &p[2], &p[1]); scanf("%I64d", &r);
	ll L = 0, R = 100000000000000LL;
	while (L < R) {
		ll mid = L + (R - L + 1) / 2;
		if (ican(mid)) L = mid;
		else R = mid - 1;
	}
	printf("%I64d", R);
	return 0;
}