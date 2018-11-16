#include <bits/stdc++.h>
#define int long long
#define sir_dratuti cin.tie(NULL);cout.tie(NULL);ios::sync_with_stdio(0);
using namespace std;

main(){
    sir_dratuti;
    int n,ans=0;
    cin>>n;
    vector<char> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            ans++;
            //cout<<a[i]<<' '<<a[i-1]<<endl;
        }
    }
    cout<<ans;
}