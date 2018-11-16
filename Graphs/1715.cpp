#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int a[n+1],b[n+1]={1};
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    b[1]=1;
    for(int i=1;i<=n;){//cout<<"#"<<endl;
        if(a[i]+i<=n){
            b[a[i]+i]++;
            i=a[i]+i;
        }
        else{
            break;
        }
    }
    if(b[t])cout<<"YES";
    else{
        cout<<"NO";
    }
    return 0;
}
