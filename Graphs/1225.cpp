#include<bits/stdc++.h>
using namespace std;
int n,a[30005],t,j=1;
int main(){
    cin>>n>>t;
    for(int i=1;i<=n-1;i++){
        cin>>a[i];
        a[i]+=i;
    }
    while(a[j]!=t&&j!=n){
        j=a[j];
    }
    if(a[j]==t)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}