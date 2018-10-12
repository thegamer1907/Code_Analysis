#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;cin>>n;
    vector<int>a(n),cnt(n,1);
    for(int i = 0; i < n; i++) cin>>a[i];
    sort(a.begin(),a.end());
    int r = 1;
    for(int i = 0; i < n/2; i++)
    {
        if(r<n)
        {
            while(r<n&&(a[i]+a[i])>a[r])
                r+=1;
                if(r>=n) break;
            // if(r<n)
            // {
                cnt[r]+=cnt[i];
                // cout<<i+1<<" "<<r+1<<" "<<cnt[r]<<endl;//<<" "<<a[i]*2<<" "<<a[r]<<endl;
                cnt[i] = 0;
                r+=1;
            // }
        }
    }
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        if(cnt[i]>0)ans++;
    }
    cout<<ans;
    return 0;
}