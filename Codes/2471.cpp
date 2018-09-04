
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
#define Mod (ll)1000000007
#define oo (int)1<<30
#define OO (ll)1<<60
#define PI 3.141592653589793
#define F first
#define S second
#define pw(x) (x)*1LL*(x)

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

ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
//int dcmp(double x, double y) { return fabs(x - y) <= EPS ? 0 : x < y ? -1 : 1; }

//string alpha = "abcdefghijklmnopqrstuvwxyz";
//char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m'
//                  ,'n','o','p','q','r','s','t','u','v','w','x','y','z'};
//char pm[11] = { 'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y' };

//const int dx[] = { 0, -1, 0, 1, -1, -1, 1, 1 };
//const int dy[] = { 1, 0, -1, 0, 1, -1, 1, -1 };
//                   R  U   L  D

int freq[10000001]; ll ans[10000001], sum[10000001]; vb primes(10000005, 1);

void sieve()
{
	primes[0] = primes[1] = 0;
	for (int i = 2; i <= 10000000 + 3; i++) {
		if (primes[i]) {
			for (int j = i ; j <= 10000000 + 3; j += i) {
				primes[j] = 0;
				ans[i] += freq[j];
			}
		}
		sum[i] = sum[i - 1] + ans[i];
	}
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n; sc(n); 
	for (int i = 0, tmp; i < n; i++) sc(tmp), freq[tmp]++;
	int q; sc(q); sieve();
	while (q--) {
		ll l, r; scanf("%lld %lld", &l, &r);
		printf("%lld\n", sum[min(r, 10000000LL)] - sum[min(--l, 10000000LL)]);
	}
	
	//int wait; sc(wait);

}