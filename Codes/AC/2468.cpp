#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned ll
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define div codeforces

using namespace std;

const int MIN = 501;
const int MXN = 1e7 + 2;
const int INF = 1e9 + 7;
const ll LINF = 1e18 + 15;
const double EPS = 1e-9;

int n, a[MXN], m, l, r, used2[MXN], ans;
ll pref[MXN];
bool used[MXN];

void all_p (){
    for (int i = 2; i < MXN; ++i){
        pref[i] = pref[i - 1];
        if (used[i]){
            pref[i] += used2[i];
            for (int j = i + i; j < MXN; j += i){
                used[j] = false;
                pref[i] += used2[j];
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    for (int i = 1; i < MXN; ++i){
        used[i] = 1;
    }
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        used2[a[i]]++;
    }
    all_p();
    cin >> m;
    for (int i = 1; i <= m; ++i){
        cin >> l >> r;
        if (l > MXN - 1) cout << "0\n";
        else {
            if (r > MXN - 1) r = MXN - 1;
            cout << pref[r] - pref[l - 1] << "\n";
        }
    }
    return 0;
}

