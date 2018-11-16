#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int store,x;
    store=0;
    int i=0;
    for(i=1;i<=n;i++){
        cin>>x;
        if(i==k)
        store=x;
        if(x<=0||store>x){
            break;
        }
    }
    cout<<i-1<<"\n";
}