#pragma comment(linker,"/STACK:128000000")
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cmath>
#include <ctime>
#include <deque>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <utility>
#include <algorithm>
#include <tuple>
#include <iostream>
#include <random>
#include <list>
#include <iomanip>
#include <assert.h>
#include <random>
#include <complex>

using namespace std;

typedef long long ll;
typedef double ld;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef pair<double, double> ptd;

const int inf = (int)1e9 + 1000;
const ll infLL = 10000000000000001LL;
const int mod = (int)1e9 + 7;
const double eps = 1e-7;
const double pi = 3.141592653589793;
const int maxlen = (int)1e5 + 10;
const int base = (int)1e9;

const int dd = (int)100 + 10;

#define ACCEPTED return 0;
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define X first
#define Y second
#define optimize cin.sync_with_stdio(false);cout.sync_with_stdio(false);cin.tie(0);

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
#endif

    string s;
    cin >> s;

    int n = s.length();

    for (int i = 0; i < n; i++) {
        if (s[i] == '0' || s[i] == '8') {
            cout << "YES\n";
            cout << s[i];
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] == '0')
                continue;

            string t{s[i], s[j]};

            int a = stoi(t);

            if (a % 8 == 0) {
                cout << "YES\n";
                cout << t;
                return 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (s[i] == '0')
                    continue;

                string t{s[i], s[j], s[k]};

                int a = stoi(t);

                if (a % 8 == 0) {
                    cout << "YES\n";
                    cout << t;
                    return 0;
                }
            }
        }
    }

    cout << "NO";

    return 0;
}