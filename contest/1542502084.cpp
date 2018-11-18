#include <bits/stdc++.h>
using namespace std;
typedef long long lol;
int main(){
    ios_base::sync_with_stdio(0);   cin.tie(0);
    string pass;
    int n;
    cin>>pass>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){cin>>v[i];     if(v[i]==pass){cout<<"YES";     return 0;}}
    for(int i=0;i<n;i++){
        if(v[i][1]==pass[0]){
            for(int j=0;j<n;j++){
                if(v[j][0]==pass[1]){cout<<"YES";     return 0;}
            }
        }
    }
    cout<<"NO";
return 0;}
