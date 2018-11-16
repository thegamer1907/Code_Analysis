#include<bits/stdc++.h>
using namespace std;
int a[30005];
int main(){
    int n,t;
    cin>>n>>t;
    for(int i=1;i<n;i++) cin>>a[i];
    int i=1;
    while(i<n && i<t){
        i += a[i];
    }
    if(i==t)
        cout<<"YES";
    else
        cout<<"NO";
}
