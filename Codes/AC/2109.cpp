#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
template <typename T> inline T sqr(T t) {return t*t;}
#define pb push_back
#define mp make_pair
#define endl "\n"

inline void files(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef _WIN32
        return;
    #endif // _WIN32
    //freopen("lca.in", "r", stdin);//freopen("output.out", "w", stdout);
}

ll n, k, a[200100];
map<ll, ll> pref, suff;

int main(){
    //files();
    ll ans = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        if (i > 2)
            suff[a[i]]++;
    }
    pref[a[1]] = 1;
    for (int i = 2; i < n; i++){

        if (a[i]%k==0){
            //cout << a[i]/k << ' ' << a[i]*k << ' ' << pref[a[i]/k] << ' ' << suff[a[i]*k] << endl;
            ans += (pref[a[i]/k]*suff[a[i]*k]);
        }
        pref[a[i]]++;
        suff[a[i+1]]--;
    }
    cout << ans;
}
