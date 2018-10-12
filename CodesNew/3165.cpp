#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
map<ll,ll>mp;
ll arr[500005];
ll sum[500005];

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int l = 1;
    int cnt = 0;
    int start=0, end = 0, ans = 0;
    for(int i=1;i<=n;i++){
        if(arr[i]==0)
            cnt++;

        while(cnt > k){
            if(arr[l]==0)
                cnt--;
            l++;
        }
        if(ans < (i-l+1)){
            start = l;
            end = i;
            ans = (i-l+1);
        }
    }
    cout<<ans<<endl;
    for(int i=start;i<=end;i++){
        arr[i]=1;
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
} 