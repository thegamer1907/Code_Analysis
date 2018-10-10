//
// Created by iceleo on 18-8-9.
//
#include <iostream>
#define N 200000
using namespace std;
typedef long long int ll;
ll num[N+5];
ll pre1[N+5],pre2[N+5];
int main(){
    ll n;
    cin>>n;
    for(ll i=1;i<=n;++i){
        scanf("%lld",&num[i]);
    }
    for(ll i=1;i<=n;++i){
        pre1[i]=pre1[i-1]+num[i];
        pre2[i]=pre2[i-1]+num[n-i+1];
    }
    for(ll i=n;i>=1;--i){
        ll *p=lower_bound(pre2+1,pre2+n+1,pre1[i]);
        ll d=p-pre2;
        if(pre1[i]==*p&&i+d<=n){
            printf("%lld\n",pre1[i]);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
