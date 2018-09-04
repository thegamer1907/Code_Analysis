#include<bits/stdc++.h>
using namespace std;
const int M=1e7+7;
long long l,r,n,cnt[M+5],pref[M+5],m,x,y;
bool used[M+5];
int main(){ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        cnt[x]++;
    }
    for(int i=2;i<M;i++){
        pref[i]=pref[i-1];
        if(!used[i]){
            for(int j=i;j<M;j+=i){
                used[j]=true;
                pref[i]+=cnt[j];
            }
        }
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>l>>r;
        l=min(l,M*1ll-1);
        r=min(r,M*1ll-1);
        cout<<pref[r]-pref[l-1]<<'\n';
    }
}
