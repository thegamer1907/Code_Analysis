#include <bits/stdc++.h>

#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define ep emplace
#define MOD 1000000007LL
#define all(x) (x).begin(), (x).end()
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define for1(i, n) for(int i = 1; i <= int(n); i++)
#define ford(i, n) for(int i = int(n) - 1; i >= 0; i--)
#define fore(i, a, b) for(int i = int(a); i <= int(b); i++)
#define debug(x) cerr << #x << " = " << x << endl

using namespace std;

typedef long long ll;

const ll oo = 1000000000000000000;
const int N = 205;

set<string> v[N][10];

char ss[N];

int mx[N];

string s[N];
int n;

int main(){

    scanf("%d", &n);

    forn(i, n){
        scanf(" %s", ss);
        s[i] = ss;
        for1(sz, 9){
            if(s[i].size() < sz) break;
            forn(j, s[i].size() - sz + 1){
                v[i][sz].insert(s[i].substr(j, sz));
            }
            if(v[i][sz].size() == (1 << sz))
                mx[i] = sz;
        }
    }

    int m;

    scanf("%d", &m);

    int a, b;
    fore(i, n, n+m-1){
        scanf("%d %d", &a, &b); a--, b--;
        mx[i] = max(mx[a], mx[b]);
        forn(j, 10){
            for(const string &x : v[a][j]) v[i][j].insert(x);
            for(const string &x : v[b][j]) v[i][j].insert(x);
            if(v[i][j].size() == (1 << j))
                mx[i] = max(mx[i], j);
        }
        fore(sz, 2, 9){
            for1(j, sz-1){ // using j chars of s[b]
                if(s[b].size() < j) break;
                if(s[a].size() < sz - j) continue;
                v[i][sz].insert(s[a].substr(s[a].size() - (sz - j), sz - j) + s[b].substr(0, j));
            }
            if(v[i][sz].size() == (1 << sz))
                mx[i] = max(mx[i], sz);
        }

        printf("%d\n", mx[i]);
        s[i] = s[a] + s[b];

        if(s[i].size() > 20)
            s[i] = s[i].substr(0, 10) + s[i].substr(s[i].size() - 10, 10);
    }




    return 0;
}
