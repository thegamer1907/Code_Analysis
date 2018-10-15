#include <bits/stdc++.h>
using namespace std;
long long k,ans;
string st;
vector<long long> v;
vector<pair<long long,long long>> res;
int main(){
    cin>>k>>st;
    if(!k){
        long long d=0,ans=0;
        for(int i=0;i<st.size();++i){
            if(st[i]=='1'){
                ans += d*(d+1)>>1, d = 0;
            }else{
                ++d;
            }
        }
        cout<<ans + d*(d+1)/2;
        return 0;
    }
    for(int i=0;i<st.size();++i){
        if(st[i]=='1'){
            v.push_back(i);
        }
    }
    for(int i=k-1;i<v.size();++i){
        res.push_back({v[i-k+1],v[i]});
    }
    if(res.size()==0){
        cout<<0;
        return 0;
    }
    if(res.size()==1){
        cout<<(res[0].first+1) * (st.size()-res[0].second);
        return 0;
    }
    ans += (res[0].first+1) * (res[1].second-res[0].second);
    for(int i=1;i+1<res.size();++i){
        ans += (res[i].first-res[i-1].first) * (res[i+1].second-res[i].second);
    }
    ans += (res[res.size()-1].first-res[res.size()-2].first) * (st.size()-res[res.size()-1].second);
    cout<<ans;
}