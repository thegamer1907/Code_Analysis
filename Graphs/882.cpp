#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cin>>n>>p;
    int t=1;
    bool ch=false;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    if(i==t-1){
    t=t+k;
    if(t==p)
    ch=true;
    }
}
    if(ch){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}