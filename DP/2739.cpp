#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<vvvi> vvvvi;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int ans = 0;
    vi bills = {100, 20, 10, 5, 1};
    for (int i = 0; i < bills.size(); ++i) {
        ans += n/bills[i];
        n -= bills[i]*(n/bills[i]);
    }
    cout << ans << "\n";
    return 0;
}