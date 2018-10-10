#include<bits/stdc++.h>
using namespace std;
int n,m,a;
string s;
map<string,bool>used;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>s;
        used[s]=true;
    }
    for(int i=1;i<=m;i++){
        cin>>s;
        if(used[s]){
            a++;
        }
    }
    if(a%2){
        if(n>=m)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else{
        if(n>m)
            cout<<"YES";
        else
            cout<<"NO";
    }
}
