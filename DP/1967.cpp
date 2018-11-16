#include <bits/stdc++.h>
#define ll long long
#define MAX 100005
#define mod 1000000007
using namespace std;
/*
 * author: Kruti_20
 */

ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int BIT[MAX];
void update(int idx){
    for(;idx<MAX;idx+=(idx&-idx)) BIT[idx]+=1;
}
int query(int idx){
    int ans=0;
    for(;idx>0;idx-=(idx&-idx)) ans+=BIT[idx];
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<pair<int,int>> v(m);
    for(int i=0;i<m;i++){
        int val; cin>>val;
        v[i]={val,i};
    }
    sort(v.begin(),v.end());
    map<int,int> mp;
    int ans[m+1];
    int j=n-1;
    for(int i=m-1;i>=0;i--){
        for(;j>=v[i].first-1;j--) if(!mp[arr[j]]) { update(arr[j]); mp[arr[j]]=1; }
        ans[v[i].second]=query(100000);
    }
    for(int i=0;i<m;i++) cout<<ans[i]<<"\n";
    return 0;
}

