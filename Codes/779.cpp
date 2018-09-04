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
#define for(xx1 , yy1 , zz1) for(int zz1 = xx1 ; zz1 <= yy1 ; zz1++)
#define mp make_pair
const double PI  = acos(-1.0);

void back(ll p, ll n) {
    if (p == (1ll << n)) {
        cout << n + 1;
        exit(0);
    }
    if (p > (1ll << n))
        back(p - (1ll << n), n - 1);
    else
        back(p, n - 1);
}

int main(){
    ll n, k;
    cin >> n >> k;
    back(k, n + 1);

}
