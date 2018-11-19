#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    ll ans = 1;
    t1 = (t1*5)%60;
    t2 = (t2*5)%60;
    h = (h*5)%60;
    for(ll i = t1;i != t2;i = (i+1)%60){
        if((i == h or i == m or i == s) and i != t2){
            ans = 0;
            break;
        }
    }
    if(ans){
        cout << "YES";
        return 0;
    }
    ans = 1;
    for(ll i = t2;i != t1;i = (i+1)%60){
        if((i == h or i == m or i == s)){
            ans = 0;
            break;
        }
    }
    if(ans){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
