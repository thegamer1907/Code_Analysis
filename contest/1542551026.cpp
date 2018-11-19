#include <bits/stdc++.h>
#define D(x) cout << #x << " = " << x << endl
using namespace std;

typedef long long int ll;

map <ll,bool> m;
ll n,k;

bool check_bit(ll val, ll idx){
    return (val & (1 << idx));
}
bool check(ll idx, ll val, ll srch){
    //cout << idx << "," << val << "," << srch << endl;
    if(idx == k){
        return m[val];
    }
    else{
        if(check_bit(srch,idx) == 0){
            if(check(idx+1,val | (1 << idx),srch))  return true;
            return check(idx+1,val,srch);
        }
        else{
            return check(idx+1,val,srch);
        }
    }
}
int main(){
    ll temp;
    cin >> n >> k;
    for(ll i = 0; i < n; i++){
        ll dec_val = 0;
        for(ll j = 1; j <= k; j++){
            cin >> temp;

            dec_val = dec_val + (temp * (1LL << (k-j)));
        }
        m[dec_val] = 1;
    }

    if(m[0]){
        cout << "YES" << endl;
    }
    else{
        ll b = (1LL << k) - 1;

        for(ll i = 1; i <= b; i++){
            if(m[i] && check(0,0,i)){
                cout << "YES" << endl;
                return 0;
            }
        }
        cout << "NO" << endl;
    }
}