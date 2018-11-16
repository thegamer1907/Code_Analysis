#include<bits/stdc++.h>
using namespace std;

int a[110],b[110],cnt[110];

int main(){
    int n,m;
    cin>>n;
    memset(cnt,0,sizeof cnt);
    for(int i=0;i<n;i++) cin>>a[i],cnt[a[i]]++;
    cin>>m;
    for(int j=0;j<m;j++) cin>>b[j];
    sort(b,b+m);
    int ans=0;
    for(int j=0;j<m;j++){
        if(cnt[b[j]-1]) cnt[b[j]-1]--,ans++;
        else if(cnt[b[j]]) cnt[b[j]]--,ans++;
        else if(cnt[b[j]+1]) cnt[b[j]+1]--,ans++;
    }
    cout<<ans<<endl;
    return 0;
}
