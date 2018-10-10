#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,m,k,x,y;
    ios_base::sync_with_stdio(false);
    cin>>x>>y>>k;
    n = min(x,y);
    m = max(x,y);
    int low = 1;
    int high = n*m;
    int ans = 0;
    while(high-low>=0){
        int mid = (low+high)/2;
        int cnt = 0;
        for(int i=1;i<=n;i++){
            cnt+=min(m,(mid/i));
        }
        if(cnt>=k){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
