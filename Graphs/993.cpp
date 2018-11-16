// By Kishan Radia

#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


int main(){
    ll n,t;
    cin>>n>>t;
    ll a[n-1],i;
    for(i=0;i<n-1;i++){
        cin>>a[i];
    }
    
    ll s=1;
    i=0;
    string ans="NO";
    while(i<n){
        if(s==t){
            ans="YES";
            break;
        }
        s+=a[i];
        i+=a[i];
    }
    cout<<ans;
    return 0;
}