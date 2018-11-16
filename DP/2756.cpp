/*
Author = Equinox
Time   = Wed 01 Aug 2018 01:22:27 AM IST
*/
#include<bits/stdc++.h>
#define SYNC  ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
template <class T>
using V = vector<T>;

typedef long long ll;
typedef long double ld;

const ll MOD = 1e9+7,INF = 9e18;
const int inf = 2e9;

int main(){SYNC
    int n;
    cin>>n;
    int ans = 0;
    ans += n/100;
    n %= 100;

    ans += n/20;
    n %= 20;

    ans += n/10;
    n %= 10;

    ans += n/5;
    n %= 5;

    ans += n;

    cout << ans;
    return 0;
}
