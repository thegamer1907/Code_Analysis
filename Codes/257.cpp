#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxn = 1e6;
ll z[maxn + 10];
int main()
{
    ll n , i = 1 , j = 1 , d , m; cin >> n;
    for(i ; i < n + 1 ; i++){
        cin >> d;
        for(ll k = j ; k < j + d ; k++)
            z[k] = i;
        j += d;
    }
    cin >> m;
    while(m--){cin >> d;cout << z[d] << endl;}
    /*while(n--)
    {
        cin >> a[i];
        if(i > 0) z[i] = z[i - 1] + a[i];
        else z[i] = a[i];
        i++;
    }
    ll m , j = 0; cin >> m;
    ll b[m] , l = 0 , r = i - 1 , mid;
    while(m--)
    {
        l = 0 , r = i - 1;
        cin >> b[j];
        if(b[j] <= a[0])
        {
            cout << 1 << endl;
            continue;
        }
        while(abs(l - r) > 1)
        {
            mid = (l + r) / 2; //cout << "MID =" << mid << ' ' << z[mid] << ' ' << r << ' ' << l<< endl;
            if(z[mid] > b[j]) r = mid;
            else l = mid;
        }
        cout << r + 1 << endl;
        j++;
    }*/
    return 0;
}
