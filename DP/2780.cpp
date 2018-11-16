//Dominik Kowalczyk

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <bitset>
#include <cmath>
#include <bitset>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <functional>
#include <time.h>
#include <cstring>
#include <complex>
#include <cstdio>
#include <stdio.h>

using namespace std;

#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef double ld; // 'long double' is 2.2 times slower
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(), (c).end()

template<typename T> inline void setmin(T &x, T y) { if (y < x) x = y; }
template<typename T> inline void setmax(T &x, T y) { if (y > x) x = y; }
template<typename T> inline T gcd(T a, T b) { while (b)swap(a %= b, b); return a; }

const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const ld PI = acos(-1);

typedef pair<int, pii> piii;
#define sf second.first
#define ss second.second

vi tab;
queue<int> liczby;

int main()
{
	boost;

	int n;
	cin >> n;

	vi wiel;

	int temp = n;
	while (temp)
	{
		wiel.pb(temp % 10);
		temp /= 10;
	}
	vi odp;
	while (n > 0)
	{
		int l = 0, pot = 1;
		for (auto& i : wiel)
		{
			if (i > 0)
			{
				i--;
				l += pot;
			}
			pot *= 10;
		}

		odp.pb(l);
		n -= l;
	}

	cout << sz(odp) << "\n";
	for (int i = sz(odp) - 1; i >= 0; i--)
	{
		cout << odp[i] << " ";
	}

	return 0;
}