#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int x;
    int y;
    int z;
    int xt=0,yt=0,zt=0;
    for(int i=0;i<a;i++){
        cin>>x>>y>>z;
        xt+=x;
        yt+=y;
        zt+=z;
    }
    if(xt==0 && yt==0 && zt==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}