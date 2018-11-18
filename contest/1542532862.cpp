#include <bits/stdc++.h>
using namespace std;


#define mp make_pair
#define pb push_back
#define ll long long
#define ld long double
#define F first
#define S second

int main() {
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string pass;
    cin >> pass;
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (pass == a[i]) {
            cout << "YES" ;
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n ; j++){
            if (a[i][1] == pass[0] && a[j][0] == pass[1]) {
                cout <<"YES";
                return 0;
            }
        }
    }
    cout << "NO";
return 0;
}
