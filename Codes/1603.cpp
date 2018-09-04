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
#define sc(x) scanf("%d",&x)
#define PB push_back
#define trav(c,i) for(typeof((c).begin()i=(c).begin();i!=(c).end();i++)
#define mem(a, b) memset(a, b, sizeof(a))
#define MP make_pair
#define EPS 1e-9
#define Mod (ll)1e9+7
#define oo (int)1<<30
#define OO 1e14*1LL
#define PI 3.141592653589793
#define F first
#define S second
#define pw(x) (x)*(x)

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
//char pm[11] = { 'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y' };
//const int dx[] = { 0, -1, 0, 1, -1, -1, 1, 1 };
//const int dy[] = { 1, 0, -1, 0, 1, -1, 1, -1 };
//                   R  U   L  D

int n, s; vi vec;

bool valid(int k)
{
	vll pr(n); ll sum = 0;
	for (int i = 0; i < n; i++) pr[i] = vec[i] + (i + 1)*1LL*k;
	SRT(pr);
	for (int i = 0; i < k; i++) sum += pr[i];
	return sum <= s;
}

int BS(int L = 0, int R = n)
{
	while (L < R) {
		int mid = L + (R - L + 1) / 2;
		if (valid(mid)) L = mid;
		else R = mid - 1;
	}
	return R;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	scanf("%d %d", &n, &s); vec.resize(n); 
	for (int i = 0; i < n; i++) sc(vec[i]);
	int k = BS(); vll pr(n); ll sum = 0;
	for (int i = 0; i < n; i++) pr[i] = vec[i] + (i + 1)*1LL*k;
	SRT(pr);
	for (int i = 0; i < k; i++) sum += pr[i];
	printf("%d %lld", k, sum);
	return 0;
}