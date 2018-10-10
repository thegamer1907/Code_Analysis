//
// Created by Administrator on 2018/8/18.
//
#include <iostream>
#include <cmath>

using namespace std;
typedef long double ld;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    ll mn=1e15,idx;
    for(ll i=0;i<n;++i){
        ll t;
        scanf("%lld",&t);
        if(mn>(ll)ceil((ld)(t-i)*1.0/n)){
            mn=(ll)ceil((ld)(t-i)*1.0/n);
            idx=i+1;
        }
    }
    cout<<idx<<endl;
    return 0;
}
