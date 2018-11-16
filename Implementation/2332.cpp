#include <bits/stdc++.h>
using namespace std;
main(){
    long long dem=0,n;
    char a[100];
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long i=1; i<n; i++){
        if(a[i]==a[i-1]) dem++;
    }
    cout<<dem;
}