#include <bits/stdc++.h>
//------------------------------------------------------------------------------------------------------
using namespace std;
typedef long long ll;
#define prmat(v) for (auto i : v){for (auto j : i){cout << j << " ";} cout << "\n";}
#define prv(v) for (auto i : v){cout << i << " ";}
#define cout(x)  cout << fixed << setprecision(x)
#define read(v) for (int i_ = 0; i_ < v.size(); i_++){cin >> v[i_];}
#define fast_io ios_base::sync_with_stdio(false)

//------------------------------------------------------------------------------------------------------

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        v.push_back(i + 1);
    }
    int cnt = 0;
    while (true) {
        cnt++;
        bool fl = 0;
        for (int i = 0; i < v.size() - 1; i += 2) {
            if (v[i] == a && v[i + 1] == b || v[i] == b && v[i + 1] == a) {
                fl = 1;
                break;
            }
            if (v[i] == a) {
                v.erase(v.begin() + i + 1);
                i--;
            } else if (v[i + 1] == a) {
                v.erase(v.begin() + i);
                i--;
            } else if (v[i] == b) {
                v.erase(v.begin() + i + 1);
                i--;
            } else if (v[i + 1] == b) {
                v.erase(v.begin() + i);
                i--;
            } else {
                v.erase(v.begin() + i);
                i--;
            }
        }
        if (fl) {
            break;
        }
    }
    if(cnt == ceil((double)log2((double)n))){
        cout << "Final!";
    }
    else{
        cout << cnt;
    }
}