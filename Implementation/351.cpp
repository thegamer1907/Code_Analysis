#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,ans=0;cin>>n>>k;
    vector<int> a(n);for(auto& i : a)cin>>i;
    for(int i=0;i<n;i++){
        if(a[i]>=a[k-1]&&a[i]>0) ans++;
        else break;
    }
    cout<<ans;
    }