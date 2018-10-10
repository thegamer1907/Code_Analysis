#include<bits/stdc++.h>

#define ll long long
#define pii pair<int, int>
#define pnt pair<double, double>
#define pll pair<ll, ll>
#define x first
#define y second
#define vi vector<int>
#define vl vector<ll>

using namespace std;

const
    ll eps= (ll)1000000000000000;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k, p= 2, h= 1;
    cin >> n >> k;

    bool ind= false;
    for (int i= 1; i <= n; i++){
        if ((k - h) % p == 0){
            cout << i;
            break;
        }
        p*= 2;
        h*= 2;
    }
    return 0;
}