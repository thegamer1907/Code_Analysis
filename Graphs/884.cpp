#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a[100000],t;
    cin>>n>>t;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        a[i]=a[i]+i;
    }
    for(int i=1;i<n;){
        i=a[i];
        if(i==t){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}