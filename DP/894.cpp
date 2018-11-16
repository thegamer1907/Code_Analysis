#include <bits/stdc++.h>
using namespace std;
main(){
    long long n,dem0=0,dem1=0,maxx=-1;
    cin>>n;
    long long a[n];
    for(long long i=1; i<=n; i++){
        cin>>a[i];
    }
    for(long long i=1; i<=n; i++){
        if(a[i]==1){
            dem1++;
            if(dem0>0) dem0--;
        }
        else{
            dem0++;
            if(dem0>maxx) maxx=dem0;
        }
    }
    cout<<maxx+dem1;
}