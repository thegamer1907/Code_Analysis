/**Bismillahir Rahmanir Rahim//fold  */
#include <bits/stdc++.h>
using namespace std;
#define inf 1000000007
#define llinf 1000000000000000000LL
#define bug(args ...) { string s = #args; istringstream iss(s); cout<<__LINE__<<": ", err(iss, args), cout << '\n'; }
void err(istringstream &iss) {}
template<typename T, typename ... Args> void err(istringstream &iss, const T &varVal, const Args & ... args) {
    string varName; iss >> varName; if (varName.back()==',') varName.back() = ' ';
    cout << varName << " = " << varVal << "; ", err(iss, args ...);
}
typedef long long int ll; typedef unsigned long long int ull; // typedef long double ld;
int n, m, T, Q, cn = 0, K;//end
#define MAXN 500005

ll _K;
bool check(ll x) {
    ll os = 0;
    for (int i = 1; i <= n; i++) {
        os += min((x-1)/i, (ll)m);
        if (os>=_K) return 0;
    }
    return 1;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);

// had to see tag :'( k er upore search korte hobe. ==> find out max number such that er cheye choto number er shonkha k
// er kom, which can be done in o(n): protyek sharite zao and min(col, (k-1)/row) ta er cheye choto.
    scanf("%d%d%lld", &n, &m, &_K);
    ll lo = 1, hi = n*(ll)m, mid, ans;
    while(lo <= hi) {
        mid = (hi+lo)>>1;
        if(check(mid)) {
            lo = mid+1;
            ans = mid;
        }
        else hi = mid-1;
    }
    printf("%lld\n", ans);

    return 0;
}