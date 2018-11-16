#include<bits/stdc++.h>
#include<limits>
#define ll long long int
using namespace std;

#define go ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)



int main(){
    go;
    int n;
    cin>>n;
    int a[n+1]={0},cnt=0,i,j,k;
    for(i=1;i<=n;i++) cin>>a[i];
    if(n==1 && a[1]==1){
        cout<<0;
        return 0;
    }
    int ans=1;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            int b[n+1]={0},cnt=0;
            for(int z=1;z<=n;z++) b[z] = a[z];

            for(k=i;k<=j;k++) b[k] = 1- b[k];

            for(k=1;k<=n;k++) if(b[k]) cnt++;
            ans = max(ans, cnt);
        }
    }
    cout<<ans;
    return 0;
}
