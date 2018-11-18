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

const int MOD = 1e9 + 7;

void add(int &x, int y) {
    x += y;
    if (x >= MOD) x -= MOD;
}

int expomod(ll a, ll e) {
    ll ans = 1;
    while (e) {
        if (e&1) ans = ans*a%MOD;
        e /= 2;
        a = a*a%MOD;
    }
    return ans;
}   

struct linear {
    int a,b;

    linear operator*(const linear &o) const {
        linear ans;
        ans.a = (ll)a * o.a % MOD;
        ans.b = ((ll)b * o.a + o.b) % MOD;
        return ans;
    }
    int inverse(int x) const { return expomod(x,MOD-2); }
    int eval(int x, int y) { return ((ll)a*x + (ll)b*y) % MOD; }

    linear inverse() const {
        linear ans;
        ans.a = inverse(a);
        ans.b = ll(MOD - b) * ans.a % MOD;
        return ans;
    }

    int solve() {
        ll ans = -b; if (ans < 0) ans += MOD;
        ans = ans*inverse(a)%MOD;
        return ans;
    }
};

linear operator^(linear a, ll e) {
    linear ans{1,0};
    while (e) {
        if (e&1) ans = ans*a;
        e /= 2;
        a = a*a;
    }
    return ans;
}


linear sum(linear a, ll e) {
    if (e == 1) return linear{1,0};
    if (e&1) {
        auto ans = a * sum(a,e-1);
        add(ans.a,1);
        return ans;
    }
    else {
        auto tail = sum(a,e/2);
        auto head = (a^(e/2))*tail;
        add(tail.a,head.a);
        add(tail.b,head.b);
        return tail;
    }
}

pii euclid(int n, int k, linear a, linear b) {
//    cerr << a.a << "x + " << a.b << endl;
//    cerr << b.a << "x + " << b.b << endl;
    if (k == 0) {
        add(a.a,MOD-1);
        return mp(0, (ll) n * a.solve() % MOD);
    }
    else {
        int q = n/k, r = n%k;
        auto nb = ((a^q)*b).inverse();
        auto na = (((a^(q-1))*b)).inverse();
        int pref,all; tie(pref,all) = euclid(k,r,na,nb);
        int rest = all; add(rest, MOD-pref);

        auto X = sum(a,q+1).eval(pref,r);
        auto Y = sum(a,q).eval(rest,k-r);
        return {all, (X+Y)%MOD};
    }
}


int main() {
    int T; cin >> T;

    linear a{1,1}, b{MOD/2+1,1};

//     forsn(i,1,20) {
//         auto p = sum(a,i);
//         cerr << p.a << "x + " << p.b << endl;
//     }


    while (T--) {
        int n,k; cin >> n >> k;
        ll sum = euclid(n,k,a,b).second;
        cout << sum * a.inverse(n) % MOD << '\n';
    }
    return 0;
}
