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

	string s;

	cin >> s;

	int a = 0;
	int b = 0;

	for (int i = 0; i < sz(s) - 1; ++i)
	{
		if (!a&&s[i] == 'A' && s[i + 1] == 'B')
		{
			++a; ++i; continue;
		}
		if (a&&!b&&s[i] == 'B' && s[i +1 ] == 'A')
		{
			++b; ++i; continue;
		}
	}

	int ac = 0, bd = 0;

	for (int i = 0; i < sz(s) - 1; ++i)
	{
		if (!ac&&s[i] == 'B' && s[i + 1] == 'A')
		{
			++ac; ++i; continue;
		}
		if (ac&&!bd&&s[i] == 'A' && s[i + 1] == 'B')
		{
			++bd; ++i; continue;
		}
	}

	if ((a &&b)||(bd &&ac) )cout << "YES";
	else cout << "NO";
	
	return 0;
}