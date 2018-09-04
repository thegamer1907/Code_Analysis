#include <bits/stdc++.h>

#define fr first
#define sc second
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pdd pair<double,double>
#define all(X) X.begin(),X.end()
#define sz size()
#define memset(X,Y) memset(X,Y,sizeof X)
#define mod 1e9+7

typedef long long ll;
using namespace std;
int const N=5*1e3+10;
ll n,k;
ll f(ll st,ll en,ll val,ll id){
    ll mid=( st + en ) / 2;
    if(id > mid){
        return f( mid + 1 , en , val - 1 , id );
    }
    else if(id < mid){
        return f( st , mid - 1 , val - 1 , id );
    }
    else{
        return val;
    }

}
int main(){

    cin >> n >> k;
        if(k % 2){
                cout << 1 << endl;
        }
        else{
            ll ans = f( 1 , (1LL << n) - 1 , n , k );
            cout << ans << endl;
        }
}