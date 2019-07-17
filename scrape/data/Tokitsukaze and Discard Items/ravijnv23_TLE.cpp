#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll n,m,k;
cin>>n>>m>>k;
vector<ll> v;
ll temp;
for(ll i=0;i<m;i++){
    cin>>temp;
    v.push_back(temp);
}
ll cnt=0;
ll lst=k;
ll steps=0;
sort(v.begin(),v.end());
while(cnt<m){
    auto it=upper_bound(v.begin(),v.end(),lst);
    auto it2=it-v.begin();
    ll tx=it2;
   // cout<<lst<<" vvv "<<it2<<endl;
    it2-=cnt;
    cnt+=it2;
    if(it2==0){
            ll tp=0;
            if(v[tx]>lst){
                 tp=v[tx];
            }
            else{
                tp=v[tx+1];
            }
            ll tm=(tp-steps)/k;
            tm=(tm+1)*k;

        lst=tm;
        continue;
    }

    steps++;
    lst+=it2;
  // cout<<lst<<" "<<it2<<"bvv "<<cnt<<endl;

}
cout<<steps<<endl;
}