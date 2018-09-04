#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;
string s;
int n,k;
bool solve(int mid){
    //a's
    int cnt=0;
    for(int i=0;i<mid;i++)if(s[i]=='b')cnt++;
    if(cnt<=k)return true;
    for(int i=1;i+mid-1<n;i++){
        if(s[i-1]=='b')cnt--;
        if(s[i+mid-1]=='b')cnt++;
        if(cnt<=k)return true;
    }

    //b's

    cnt=0;
    for(int i=0;i<mid;i++)if(s[i]=='a')cnt++;
    if(cnt<=k)return true;
    for(int i=1;i+mid-1<n;i++){
        if(s[i-1]=='a')cnt--;
        if(s[i+mid-1]=='a')cnt++;
        if(cnt<=k)return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>k;
    cin>>s;
    int l=1;
    int r=n;
    int ans=0;
    while(l<=r){
        int mid=(l+r)>>1;
        if(solve(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }

    }
    cout<<ans;
    return 0;
}
