#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i , l , r) for(int i=l; i < r; i++)

using namespace std;

int main(){
    fastio
    ll n , x , y , z , sx = 0 , sy = 0 , sz = 0;
    cin >> n;
    while(n--){
        cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
    }
    if(sx == 0 && sy == 0 && sz == 0) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}