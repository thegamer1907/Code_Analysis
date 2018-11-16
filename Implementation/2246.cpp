#include <iostream>
using namespace std;
main(){
    long long k,w,n,s=0;
    cin>>k>>n>>w;
    for(long long i=1; i<=w; i++){
        s+=k*i;
    }
    if(s<=n) cout<<"0";
    else cout<<s-n;
}