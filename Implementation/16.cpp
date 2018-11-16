#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define pii pair<int,int>
#define mp make_pair
#define xx first
#define yy second
#define pb push_back

int main() {
    IOS;
    int n,a,b; cin >> n >> a >> b;
    int cnt = 0;
    a--; b--;
    n /= 2;
    if ((a&n)!=(b&n)) { cout << "Final!\n"; return 0; }
    while ((a&n)==(b&n)) n/=2;
    while (n>0) { n/=2; cnt++; }
    cout << cnt;
}
