#include <bits/stdc++.h>
using namespace std;

#define print(x) cout << x << '\n';
#define fr(i, a, b) for(int i = a ; i < b ; i++)
#define frr(i, a, b) for(int i = a ; i >= b ; i--)

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef vector<int> vi;

ll k, n, w, x, y, z;
ll xx = 0, yy = 0, zz = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.in", "r", stdin);
    cin >> k;
    fr(i, 0, k){
        cin >> x >> y >> z;
        xx += x; yy += y; zz += z;
    }
    if(xx == 0 && yy == 0 && zz == 0) cout << "YES";
    else cout << "NO";
    
    return 0;
}
