#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,x,y,z;
    cin>>n;
    a=b=c=0;
    while(n--){
        cin>>x>>y>>z;
        a+=x,b+=y,c+=z;
    }
    if(a||b||c)cout<<"NO";
    else cout<<"YES";
    return 0;
}