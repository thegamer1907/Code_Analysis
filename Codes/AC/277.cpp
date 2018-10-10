#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    vector<ll> A(n, 0);
    for (int i = 0; i < A.size(); i++)
    {
        ll a;
        cin >> a;
        if (i == 0)
            A[i] = a;
        else
            A[i] = A[i - 1] + a;
    }


    ll m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        ll ans = lower_bound(A.begin(), A.end(), x) - A.begin();
        //cout << "  !!!  ";
        cout << ans + 1 << endl;
    }

}
