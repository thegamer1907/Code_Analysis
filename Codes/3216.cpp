#include <iostream>

#include <fstream>

#include <vector>
#include <set>
#include <string>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>

#include <algorithm>
#include <iomanip>
#include <cmath>
#include <random>
#include <cstdlib>
#include <ctime>
#include <utility>

using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define F first
#define S second
#define forcin(n, a) for(int i = 0; i < n; ++i) {cin >> a[i];}
#define forcout(n, a) for(int i = 0; i < n; ++i) {cout << a[i] << " ";}
#define PI acos(-1)
#define forup(st, fin) for(int i = st; i < fin; ++i)
#define fordown(st, fin) for(int i = st; i >= fin; --i)
#define reverse_all(v) reverse(v.begin(), v.end())
#define sort_all(v) sort(v.begin(), v.end())
#define sort_allr(v) sort(v.rbegin(), v.rend())
#define mmin(a, b, c) min(min(a, b), c)
#define mmax(a, b, c) max(max(a, b), c)

///#define cin in
///#define cout out
///#define int long long

const ll MAXL = 1e18;
const int N = 10005000;
const int MAXN = 1e9 + 7;

set<int> v;

void get_ans(int n, int sum, int cnt, int last) {
    if (cnt == n) {
        if (v.find(sum) == v.end()) {
            v.insert(sum);
        }
        return;
    }
    get_ans(n, sum + 50, cnt + 1, 50);
    if (last == 50) {
        return;
    }
    get_ans(n, sum + 10, cnt + 1, 10);
    if (last == 10) {
        return;
    }
    get_ans(n, sum + 5, cnt + 1, 5);
    if (last == 5) {
        return;
    }
    get_ans(n, sum + 1, cnt + 1, 1);
    return;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    srand(time(NULL));
    int n, mini = MAXN;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        mini = min(mini, v[i]);
    }
    int start = mini % n, minus = 0;
    for (int i = 0; i < n; ++i) {
        if (v[start] <= mini + minus) {
            cout << start + 1 << "\n";
            return 0;
        }
        minus++;
        start++;
        start %= n;
    }
    return 0;
}

/*
 5
 1 2 3 2 4
 */