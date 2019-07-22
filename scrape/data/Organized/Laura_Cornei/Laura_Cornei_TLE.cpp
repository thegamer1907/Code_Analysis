#include<iostream>
#include <stdio.h>
#define ll long long
using namespace std;
ll n, m, k, p[100005], dif;
ll ans;
int main(){

    ll i, j;
    ll pg=1;
    std::ios::sync_with_stdio(false);
    cin>>n>>m>>k;
    for(i=1; i<=m; i++) cin>>p[i];
    for(i=1; i<=m;){
       j=i;
       while((j<=m)&&((pg-1)*k+1<=(p[j]-dif))&&((p[j]-dif)<=pg*k)){
            j++;
       }
       if(j>i){
          ans++;
          dif+=(j-i);
       }
       else pg++;
       i=j;
    }
    cout<<ans;
    return 0;
}