#include <iostream>
using namespace std;
main(){
    long long n,x[100],y[100],z[100],s=0,s1=0,s2=0;
    cin>>n;
    for(long long i=1; i<=n; i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    for(long long i=1; i<=n; i++){
        s+=x[i];
        s1+=y[i];
        s2+=z[i];
    }
    if(s==0 && s1==0 && s2==0) cout<<"YES";
    else cout<<"NO";
}