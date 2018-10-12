#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
vector<ll>ans;
map<pair<ll,ll>,ll>mp;
vector<pair<ll,ll> >v;
ll n=0,q=0,total=0;
ll arr[200000];
cin>>n>>q;
for(int i=0;i<n;i++){
cin>>arr[i];
total+=arr[i];
}
ll l=total,r=0,sum=total;
mp[{0,0}]=n;
for(int i=0;i<n;i++){
r=l-arr[i]+1;
mp[{l,r}]=n-i;
v.push_back({l,r});
l-=arr[i];
}

v.push_back({0,0});
reverse(v.begin(),v.end());

for(int i=0;i<q;i++){
ll qi=0,val=0;cin>>qi;
sum=max(sum-qi,0ll);
ll low=0,high=v.size()-1;

while(low<=high){
ll mid=(low+high)/2;
if(sum<v[mid].second)high=mid-1;
else if(sum>=v[mid].first)low=mid+1,val=mid;
else{val=mid;break;}
}

ans.push_back(mp[ v[val] ]);
if(!sum)sum=total;
}
for(int i=0;i<q;i++)cout<<ans[i]<<endl;





    return 0;
}
