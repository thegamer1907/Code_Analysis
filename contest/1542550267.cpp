#include <bits/stdc++.h>
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define fi first
#define se second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef pair<double,double> dd;
typedef pair<char,char> cc;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<ll, ll> l4;
typedef long double ld;
typedef pair<ld,ld> ldd;
const ld pi = acosl(-1);
const int maxn = 210;
const ll mod = 1e9+7;
const int inf = 1e9;
const ld eps = 1e-8;
int n,m,a,b;
string s[maxn];
set<string> ms[maxn];
string nine[maxn][2];
int cur;

void mge(set<string> &s1, set<string> &s2) {
    for (auto i : s2) s1.insert(i);
}
void cal(int id) {
    int len = s[id].length();
    rep(i, 1, len+1) rep(j, 0, len-i+1) {
        ms[id].insert(s[id].substr(j,i));
    }
    if (len < 9) nine[id][0] = nine[id][1] = s[id];
    else nine[id][0]=s[id].substr(0,9), nine[id][1]=s[id].substr(len-9);
}
int check() {
    int ret = 0;
    string t = "";
    while (1) {
        t += '0';
        int k = 1<<(ret+1);
        rep(i, 0, k) {
            rep(j, 0, ret+1) {
                if ((i>>j)&1) t[j]='1';
                else t[j]='0';
            }
            if (!ms[cur].count(t)) return ret;
        }
        ret++;
    }
    return -1;
}
void sol(int a, int b) {
    ms[cur] = ms[a];
    mge(ms[cur],ms[b]);
    int la = nine[a][1].length();
    int lb = nine[b][0].length();
    rep(i, 0, la) rep(j, 0, lb) {
        if (la-i+j+1 > 9) continue;
        string t = nine[a][1].substr(i)+nine[b][0].substr(0,j+1);
        ms[cur].insert(t);
    }
    nine[cur][0] = nine[a][0]+nine[b][0];
    nine[cur][0] = nine[cur][0].substr(0,9);
    nine[cur][1] = nine[a][1]+nine[b][1];
    if (nine[cur][1].length() > 9)
        nine[cur][1] = nine[cur][1].substr(nine[cur][1].length()-9);
}


int main() {
    scanf("%d",&n);
    rep(i, 0, n) cin >> s[i], cal(i);
    scanf("%d",&m);
    cur = n;
    rep(i, 0, m) {
        scanf("%d%d",&a,&b);
        a--,b--;
        sol(a,b);
        printf("%d\n",check());
        cur++;
    }
    return 0;
}
