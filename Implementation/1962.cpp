#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll t, x = 0, y = 0, z = 0;
    cin >> t;
    while (t-- > 0)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        x += a; y += b; z += c;
    }
    if (x == 0 && y == 0 && z == 0)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}