#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define F first
#define S second

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main(){
    ld h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    if (h == 12) h = 0;
    if (t1 == 12) t1 = 0;
    if (t2 == 12) t2 = 0;
    h = (h * 3600 + m * 60 + s) / (12.0 * 3600);
    m = (m * 60 + s) / (3600);
    s = s / 60;
    t1 = t1 / (12.0);
    t2 = t2 / (12.0);
    vector<ld> v;
    v.pb(h); v.pb(m); v.pb(s); v.pb(t1); v.pb(t2);
    sort(v.begin(), v.end());
    int n = v.size();
    for (int j=0;j<2;j++){
        bool fl = false;
        for (int i=0;i<30;i++){
            if (v[i % n] == t1 || v[i % n] == t2){
                if (fl){
                    cout << "YES" << endl;
                    return 0;
                }
                fl = true;
            }
            else
                fl = false;
        }
        reverse(v.begin(), v.end());
    }
    cout << "NO" << endl;


    return 0;
}
