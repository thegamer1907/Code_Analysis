#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <numeric>
#include <iterator>
#include <cmath>
#define fr first
#define sc second
#define mp make_pair
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

const int maxn = 1e5+123;
const int inf = 1e9;
const int base = 1e9+7;

int n, a, b;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin >> n >> a >> b;
    if(a > b) swap(a, b);
    int p = 0, t = n;
    while(t) {
        p++;
        t >>= 1;
    }
    p--;
    int k = p, ans;
    while(true) {
        if((a <= n/2) && (b > n/2)) {
            ans = p;
            break;
        }
        if(a > n/2) {
            a -= n/2, b -= n/2;
        }
        p--;
        n /= 2;
    }
    if(ans == k) cout << "Final!";
    else cout << ans;
    return 0;
}
