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

string s, t[111];
int n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cin >> s;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> t[i];
    }
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        if(s == t[i]) ans = 1;
        for(int j = 0; j < n; ++j) {
            if(t[i][1] == s[0] && t[j][0] == s[1])
                ans = 1;
        }
    }
    if(ans) cout << "YES\n";
    else cout << "NO\n";
    
    return 0;
}
