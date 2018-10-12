#include <iostream>
#include <algorithm>

using namespace std;

#define endl '\n'
#define ll  long long

#define max_size (ll) (1e5*5 + 7)

ll n, mn;
string inp[max_size];
ll ln[max_size];
char cur, nex;
bool b;

ll len(ll i) {
    return ln[i] == -1 ? inp[i].size() : ln[i];
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> n;

    for (ll i=0; i < n; i++) {
        cin >> inp[i];
        ln[i] = -1;
    }

    for (ll i=n-1; i > 0; i--) {
        mn = min(len(i), len(i - 1));
        b = false;

        for (ll j=1; j < mn; j++) {
            cur = inp[i][j];
            nex = inp[i - 1][j];

            if (cur != nex) {
                b = true;
                if (cur > nex) {
                    break;
                }
                ln[i - 1] = j;
                break;
            }
        }

        if (!b) {
            if (len(i) < len(i - 1)) {
                ln[i - 1] = len(i);
            }
        }
    }

    for (ll i=0; i < n; i++) {
//        cout << len(i) << endl;
        for (ll j=0; j < len(i); j++) {
            cout << inp[i][j];
        }
        cout << endl;
    }


    return 0;
}