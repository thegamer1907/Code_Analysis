#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define int long long
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define endl '\n'
#define D(x) cout<<#x<<" -> "<<x<<'\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define uni(x) (x).erase(unique(all(x)), (x).end());
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
const ll infll = powl(2, 62)-1;
const ld pi = 4.0*atanl(1.0);
const ll mod = powl(10, 9) + 7;

int32_t main() {ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, k, temp;
    cin >> n >> k;
    vector<int> arr(n);
    unordered_set<int> table;
    for(int &x : arr) {
        for(int i = 0; i < k; ++i) {
            cin >> temp;
            x <<= 1;
            x |= temp;
        }
        if(x == 0) {
            cout << "yes\n";
            return 0;
        }
    }
    int upper = pow(2,k);
    for(int &x : arr) {
        for(int i = 0; i < upper; ++i) {
            temp = i&x;
            if(temp==0 && table.count(i)) {
                cout << "yes\n";
                return 0;
            }
        }
        table.insert(x);
    }
    cout << "no\n";
    return 0;
}
























