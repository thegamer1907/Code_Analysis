#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(n) for(int i=0;i<n;i++)
#define fori(i,a,b) for(int i=a;i<=b;i++)
#define endl "\n"
#define len(s) long(s.length())

int main(){
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    int i=1;
    while(i!=m&&i!=n){
        i = i+a[i];
    }
    if(i==m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}