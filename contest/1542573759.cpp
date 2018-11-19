#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <ctime>
#include <cstdlib>
#include <queue>
#include <cstring>
#include <cassert>
#include <bitset>

using namespace std;

#define mp make_pair
#define f first
#define s second
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define sqr(x) ((x)*1ll*(x))

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

int n, k;
int a[100100];
int was[1 << 6];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j < k; ++j) {
            int x;
            cin >> x;
            if(x) a[i] |= (1 << j);
        }
        was[a[i]] = 1;
        for(int m = 0; m < (1 << k); ++m) {
            if(was[m] && (m & a[i]) == 0) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    
    
    return 0;
}