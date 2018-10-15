#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n;
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    ll k;
    cin >> k;
    ll maxi = 0;
    ll suma = 0;
    for(int i = 0; i<n;i++)
    {
        ll b;
        cin >> b;
        suma+=b;
        maxi=max(maxi, b);
    }
    ll p = maxi*n-suma;
    ll q = k-p;
    cout << maxi+max(ll(0),((q+n-1)/n)) << " " << maxi+k << "\n";
}
