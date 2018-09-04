#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <memory.h>
using namespace std;
typedef long long ll;

const int N = 1e6+6;

ll f(ll x, int n, int m){
    ll res = 0;
    --x;
    for(int i=1;i<=n;++i) res+=min((ll)m, x/i);
    return res;
}

int main(){
    //freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
    
    int n, m;
    
    cin>>n>>m;
    
    ll k;
    
    cin>>k;
    
    
    ll l = 1, r = 1LL*n*m+1;
    
    while(l<r){
        ll x = (l+r)>>1;
        
        if(f(x,n,m)<k) l = x+1; else r = x;
    }
    
    cout<<l-1<<endl;
    
    return 0;
}