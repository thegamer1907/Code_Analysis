//Solution by Zhusupov Nurlan
#include <iostream>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <ctime>
#include <numeric>

using namespace std;

typedef long long ll;
typedef map<string , int> MSI;
typedef vector<int> VI;

#define pb(x) push_back(x)
#define sqr(x) ((x) * (x))
#define F first
#define S second
#define SZ(t) ((int) t.size())
#define len(t) ((int) t.length())
#define base 10
#define fname ""
#define sz 500 * 1000
#define EPS (1e-8)
#define INF ((int)1e9 + 9)
#define write(xx) printf("%d" , xx);
#define readln(xx) getline(cin , xx)
#define read(xx) scanf("%d" , &xx)
#define mp make_pair

const int mod = 1e9 + 7;
const double PI  = acos(-1.0);

int a[sz], b[sz], n;

int main() {
    cin >> n;
    a[0] = 1;
    while (n--) {
        for (int i = 0; i < 4; i++) {
            int s = 0;
            for (int j = 0; j < 4; j++) {
                if (i != j) s += a[j];
                if (s >= mod) s -= mod;
            }
            b[i] = s;
        }
        for (int i = 0; i < 4; i++)
            a[i] = b[i];
    }
    cout << a[0];

}
