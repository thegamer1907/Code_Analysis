#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    string p[n];
    for(int i=0;i<n;i++)
        cin>>p[i];
    
    for(int i=0;i<n;i++){
        if(s==p[i]){
            cout<<"YES";
            return 0;
        }
        if(p[i][1]==s[0])
        for(int j=0;j<n;j++){
            if(s[1]==p[j][0]){
                cout<<"YES"; return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}