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
    //freopen("test.in", "r", stdin);freopen("test.out", "w", stdout);
}

ll a[10000100], n, kek[10000100], p[10000100];

int main(){
    files();
    cin >> n;
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 1; i <= 1e7; i++)
        kek[i] = 1;
    kek[0] = kek[1] = 0;
    for (int i = 2; i <= 1e7; i++){
        p[i] = p[i-1];
        if (kek[i]==0)
            continue;
        for (int j = i; j <= 1e7; j+=i){
            p[i] += a[j];
            kek[j] = 0;
        }
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        r = min(r, (int)1e7);
        l = min(l, r);
        cout << p[r] - p[l-1] << endl;
    }
}
