#include <bits/stdc++.h>
using namespace std;

    vector<int> v;
int bins(int x)
{
    int lo=0,hi=v.size()-2;
    while(lo<=hi){
        int mid= (hi+lo)/2;
        if(v[mid]*2 <=x && v[mid+1]*2>x)
            return mid;
        else if(v[mid]*2>x)
            hi=mid-1;
        else
            lo=mid+1;
    }
    return -1;
}

int main(){
   int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    
//for(int i=0;i<n;i++)
  //      cout<<v[i]<<" ";
    //cout<<endl;
    int it= bins(v.back());
    if(it==-1)
        return cout<<n,0;
    //cout<<v[it]<<endl;
    int ans=1;
    
    it=min(n/2-1,it);
    it--;
    for(int i=n-2;i>=0 && it>=0; it--){
        if(v[it]*2<= v[i])
            i--,ans++;
    }
   // cout<<ans<<endl;
    cout<<n-ans;
}