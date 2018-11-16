#include<bits/stdc++.h>
using namespace std;
int res[100001];
int main(){
    int n,a[100001];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==0)
            res[i]=res[i-1]+1;
        else
            res[i]=res[i-1];
    }
    if(n==1){
        if(a[1]==1)
            cout<<0;
        else
            cout<<1;
        return 0;
    }

    
    int ans=0;
    for(int i=1;i<=n-1;i++){
        for(int j=i;j<=n;j++){
            int temp=res[j]-res[i-1]+i-1-res[i-1]+n-j-res[n]+res[j];
            //cout<<i<<" "<<j<<" "<<temp<<endl;
            ans=max((res[j]-res[i-1]+i-1-res[i-1]+n-j-res[n]+res[j]),ans);
        }
    }
    cout<<ans;
}