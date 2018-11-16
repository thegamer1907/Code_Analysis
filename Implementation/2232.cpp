#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll k, n, w;
    cin >>k >>n >>w;
    
    ll need = 0;
    
    for(int i = 1; i <= w; i++){
        need += i*k;   
    }
    
    cout<<max(need-n, 0*1ll);
    
    
}