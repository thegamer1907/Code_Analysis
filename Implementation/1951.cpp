#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll x = 0, y = 0, z= 0;
    for (int i=0;i<n;++i){
        ll a,b,c;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
//    cout << x << " " << y << " " << z << endl;
    if (x==0 && y==0 && z==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
