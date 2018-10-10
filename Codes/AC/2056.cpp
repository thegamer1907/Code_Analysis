#include <bits/stdc++.h>

using namespace std;

#define INF 9999999999

typedef long long int ll;
typedef unsigned long long int ull;
typedef signed long long int sll;

const int Mod = 3e8 + 7;
const int MX = 5e8 + 7;

int n, k;
map <ll, ll> f, s;
ll x;
ll ans;

int main()
{
    cin >> n >> k;
    for(int i=0 ; i<n; i++){
        cin >> x;

        if(x%k == 0){
            ans += f[ x/k ];
            f[ x ] += s[ x/k ];
        }

        s[ x ]++;
    }

    cout << ans << endl;

    return 0;
}
