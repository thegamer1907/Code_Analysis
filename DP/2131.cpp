#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <bitset>
#include <vector>
#include <complex>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <random>
#include <cstring>
#include <array>

#define F first
#define S second
#define ll long long
#define ld long double
#define vi vector < int >
#define vll vector < ll >
#define pb push_back
#define sz(x) int((x).size())
#define pii pair < int, int >
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vpii vector < pii >
#define fenwick(x) ((x) & -(x))
#define debug(x) cout << "[ " << #x << " ]: " << x << "\n";

using namespace std;

//CZY DANE POSORTOWANE, N = 0, N = 1, CZYTANIE TRESCI, < rosnaco, > malejaco

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int N, Q;
	cin >> N >> Q;

	vll tab(N, 0);
	vll ans(N, 0);
	set <ll> se;

	for (int i = 0; i < N; ++i)cin >> tab[i];
	for (int i = N - 1; i >= 0; --i)
	{
		se.insert(tab[i]);
		ans[i] = sz(se);
	}

	while (Q--)
	{
		int a;
		cin >> a;
		cout << ans[a - 1] << "\n";
	}

	
	return 0;
}