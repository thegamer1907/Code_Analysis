#include<bits/stdc++.h>
#define ll long long int
#define INF 10000000000
using namespace std;
int main(){
    
    string ans;
    cin>>ans;
    ll n;
    cin>>n;
    string s[n];
    for(ll i=0;i<n;i++){
        cin>>s[i];
    }
    bool flag1=false,flag2=false;
    for(ll i=0;i<n;i++){
        if(s[i]==ans){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    for(ll i=0;i<n;i++){
        if(s[i][1]==ans[0]){
            flag1=true;
            break;
        }
    }
    for(ll i=0;i<n;i++){
        if(s[i][0]==ans[1]){
            flag2 = true;
            break;
        }
    }
    if(flag1 && flag2){
        cout<<"YES"<<endl;
        return 0;
    }
    
    
    cout<<"NO"<<endl;
    return 0;
}