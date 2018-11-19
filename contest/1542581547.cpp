#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

const int MAX = 1e5+2;

bitset<MAX> know[5];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n'
    #endif // LOCAL

    int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            int x; cin >> x;
            if(!x) {
                know[j][i] = 1;
            }

        }
    }

//    for(int i = 0; i < k; i++) {
//        cout << know[i] << endl;
//    }
//    cout << endl << endl;

    bool ok = false;

    for(int mask = 0; mask < (1<<k) && !ok; mask++){
        int cnt1 = 0;
        bitset<MAX> a, b;
        a.set();
        b.set();
        for(int j = 0; j < k; j < ++j) {
            if( (mask>>j)&1 ) {
                a = a&know[j];
            } else {
                b = b&know[j];
            }
        }

        if(a.count() == MAX) a.reset();
        if(b.count() == MAX) b.reset();

//        cout << bitset<3>(mask) << endl;
//        cout << a << endl;
//        cout << b << endl;
//        cout << endl;

        if(mask == 0) ok |= a.count() > 0 || b.count() > 0;
        else ok |= a.count() > 0 && b.count() > 0;
    }

    if(ok) cout << "YES";
    else cout << "NO";

}
