#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,a,b) for(int i=a;i<b;i++)


int main(){
    int n;cin>>n;
    int a[n];
    rep(i,0,n){
        int t;cin>>t;
        a[t-1]=i+1;
    }
    rep(i,0,n)
        cout<<a[i]<<" ";
    return 0;
}