#include <bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<(int)(n);i++)
#define si(c) ((int)(c).size())
#define forsn(i,s,n) for(int i = (int)(s); i<((int)n); i++)
#define dforsn(i,s,n) for(int i = (int)(n)-1; i>=((int)s); i--)
#define all(c) (c).begin(), (c).end()
#define D(a) cerr << #a << "=" << a << endl;
#define pb push_back
#define eb emplace_back
#define mp make_pair

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

string pass, s[111];
bool first[300], last[300];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> pass;
    int n; cin >> n;
    forn(i,n) cin >> s[i];
    bool ok = 0;
    forn(i,n) forn(j,n) {
        if ((s[i] + s[j]).find(pass) != string::npos) ok = true;
    }
    cout << (ok ? "YES" : "NO") << endl;

    return 0;
}
