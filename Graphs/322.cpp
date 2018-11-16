#include <bits/stdc++.h>
using namespace std;
main(){
    long long n,x;
    char a[1000];
    cin>>n>>x;
    for(long long i=0; i<n; i++){
        cin>>a[i];
    }
    for(long long k=0; k<x; k++){
        for(long long i=0; i<n-1; i++){
            if(a[i]=='B' && a[i+1]=='G') {swap(a[i],a[i+1]); i++;}
        }
    } 
    for(long long i=0; i<n; i++){
        cout<<a[i];
    }
}