#include<bits/stdc++.h>
using namespace std;
main(){
int n,t;
cin>>n>>t;
int a[n];
for(long i=1;i<=n-1;++i){
    cin>>a[i];
}
long b=1;
while(true){
    if(b==t){
        cout<<"YES";
        return 0;
    }
    if(b>t){
        cout<<"NO";
        return 0;
    }
    b+=a[b];
}
}
