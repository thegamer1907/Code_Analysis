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

const int
    S = 60,
    M = 60*S,
    H = 12*M;

int dist(int a, int b) { 
    int res = b-a;
    if (res < 0) res += H;
    return res;
}

bool btw(int a, int x, int b) {
    return dist(a,x) + dist(x,b) == dist(a,b);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int h,m,s; cin >> h >> m >> s; h %= 12;
    int ph = h*M + m*S + s, pm = (m*S+s)*12, ps = s*12*60;

    int t1,t2; cin >> t1 >> t2;
    t1 *= M; t2 *= M;

    bool x = !btw(t1,ph,t2) && !btw(t1,pm,t2) && !btw(t1,ps,t2);
    bool y = !btw(t2,ph,t1) && !btw(t2,pm,t1) && !btw(t2,ps,t1);
    bool ans = x || y;
    cout << (ans ? "YES" : "NO") << endl;

    return 0;
}
