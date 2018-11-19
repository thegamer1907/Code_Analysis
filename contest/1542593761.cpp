#include <bits/stdc++.h>
#define ll long long
#define fi first
#define sec second

using namespace std;


int main(){

    string s,s2;
    cin>>s;
    int n;
    cin>>n;

    bool vis=0,vis2=0;

    for(int i=0;i<n;i++){
        cin>>s2;
        if(s2==s){
            cout<<"YES"<<endl;
            return 0;
        }
        if(s2[0]==s[1]){
            //cout<<s2<<endl;
            vis=1;
        }
        if(s2[1]==s[0]){
           // cout<<'$'<<s2<<endl;
            vis2=1;
        }
    }
    if(vis&&vis2){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
}
