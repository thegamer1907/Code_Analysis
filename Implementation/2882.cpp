#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
#define forn(i,n) for(int i=0; i < int(n); ++i)
#define all(x) (x).begin(), (x).end()
#define eb emplace_back
#define pb push_back
#define fst first
#define snd second

int main() {
    ios::sync_with_stdio(false);
    set<char> s;
    for (char c; cin >> c;)
        if (isalpha(c))
            s.insert(c);
    cout << s.size() << '\n';
}
