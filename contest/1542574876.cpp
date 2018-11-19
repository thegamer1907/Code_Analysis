#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cmath>
#include <climits>

#include <sstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <utility>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false)

typedef long double ld;
typedef long long ll;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const int max_K = 15;

struct str {
	string pref, suff;
	map <string, bool> occ;
};

const int max_N = 210;
str arr[max_N];
string inp[max_N];
void init(int x);
void combine(int x, int y, int z);
inline string trim_pref(const string &S);
inline string trim_suff(const string &S);
int allk(const map<string, bool> &occ);

int main()
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		cin >> inp[i];
		init(i);
	}
	int M;
	cin >> M;
	for (int i = 1; i <= M; ++i) {
		int a, b;
		cin >> a >> b;
		combine(a, b, N + i);
		cout << allk(arr[N + i].occ) << endl;
	}
}

void init(int x)
{
	const string &S = inp[x];
	for (int i = 0; i < S.length(); ++i) {
		for (int j = 1; j <= max_K && i + j - 1 < S.length(); ++j) {
			arr[x].occ[S.substr(i, j)] = 1;
		}
	}
	arr[x].pref = trim_pref(S);
	arr[x].suff = trim_suff(S);
}

void combine(int x, int y, int z)
{
	arr[z].occ = arr[x].occ;
	for (auto &s : arr[y].occ) {
		arr[z].occ[s.first] = 1;
	}

	string combine = arr[x].suff + arr[y].pref;
	for (int i = 0; i < combine.length(); ++i) {
		for (int j = 1; j <= max_K && i + j - 1 < combine.length(); ++j) {
			arr[z].occ[combine.substr(i, j)] = 1;
		}
	}

	arr[z].pref = trim_pref(arr[x].pref + arr[y].pref);
	arr[z].suff = trim_suff(arr[x].suff + arr[y].suff);
}

int allk(const map<string, bool> &occ)
{
	int cnt[max_K + 1] = {0};
	for (auto &x : occ) {
		cnt[x.first.length()]++;
	}
	for (int k = 1; k <= max_K; ++k) {
		if (cnt[k] < (1 << k)) {
			return (k - 1);
		}
	}
	return 42;
}

inline string trim_pref(const string &S)
{
	return S.substr(0, max_K);
}

inline string trim_suff(const string &S)
{
	return S.substr(max(0, int(S.length() - max_K)), max_K);
}
