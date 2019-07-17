#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxm=1e5+100;
ll a[maxm];
vector<ll>v;
map<ll,int>mp;
vector<ll>ret;
int main(){
    int n;
    ios::sync_with_stdio(false);
    cin>>n;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=1;i<=n;i++){
        if(!mp[a[i]]){
            v.push_back(a[i]);
        }
        mp[a[i]]++;
        if(mp[a[i]]==2)
            ret.push_back(a[i]);
    }
    if(ret.size()>=2||mp[0]==2){
        cout<<"cslnb"<<endl;
        return 0;
    }
    else if(ret.size()==1&&v.size()!=n-1){
        cout<<"cslnb"<<endl;
        return 0;
    }
    else{
        if(v.size()==n-1){
            if(mp[ret[0]-1]){
                cout<<"cslnb"<<endl;
                return 0;
            }
        }
        ll rett=1LL*(n)*(n-1)/2;

        sum-=rett;
        if(sum%2){
            cout<<"sjfnb"<<endl;
            return 0;
        }
        else{
            cout<<"cslnb"<<endl;
            return 0;
        }
    }
    return 0;
}