#include<bits/stdc++.h>
using namespace std;




int n;
string s[150],t;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            string v=s[i];
            v+=s[j];
            for(int j=0;j<v.size();j++){
                if(v.substr(j,2)==t){
                    return cout<<"YES",0;
                }
            }
        }
    }
    cout<<"NO";
}
