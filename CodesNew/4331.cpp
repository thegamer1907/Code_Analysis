#include <cstdio>
#include <iostream>
#include <cstring>
#include <numeric>
#include <cstdlib>
#include <algorithm>
#include <list>
#include <set>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <fstream>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define rep(i,l,r) for(int i=(l), _##i=(r); i<=_##i; ++i)
#define dwn(i,r,l) for(int i=(r), _##i=(l); i>=_##i; --i)

#define s(n) scanf("%d",&n)
#define sc(n) scanf("%c",&n)
#define ss(n) scanf("%s",n)

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<double, pii> pdii;
typedef pair<ll, ll> pll;

const int N = 5e5 + 7;
char tmp[N];
string words[N];
int n;

int main() {
    s(n);
    rep (i, 1, n) {
        ss(tmp);
        words[i] = tmp;
    }
    dwn (i, n - 1, 1) {
        string curr = words[i];
        string next = words[i + 1];
        if (curr.compare(next) > 0) {
            int j = 0;
            while (j < curr.size() && j < next.size() && curr[j] == next[j]) {
                ++j;
            }
            words[i] = curr.substr(0, j);
        }
    }
    rep (i, 1, n) {
        printf("%s\n", words[i].c_str());
    }
}