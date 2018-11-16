#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, t, i;
    cin>>n>>t;
    int a[n-1];
    for(i=0; i<n-1; i++){
        cin>>a[i];
    }
    i = 1;
    while(i<t){
        i = i + a[i-1];
    }
    if(i==t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
