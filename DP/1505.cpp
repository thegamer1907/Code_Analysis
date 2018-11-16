#include <bits/stdc++.h>
#define pb push_back 
#define mp make_pair 
#define fi first 
#define se second
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0) 
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n),oc(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int cnt0=0,cnt1=0,ans=0;
    for(int i=0;i<n;i++){
        if(v[i]==1)cnt1++;
        oc[i]=cnt1;
    }
    if(cnt1==n){
        cout<<n-1;
        return 0;
    }
    cnt1=0;
    
    //  using two pointer approach find the range having maximum difference of cnt1-cnt0;
    for(int i=0,j=0;i<n && j<n;){
        v[j]==0 ?cnt0++:cnt1++;
        
        while(cnt1>cnt0 && i<=j){
            v[i]==0? cnt0--:cnt1--;
            i++;
        }
        int before=(i==0) ? 0 :oc[i-1],after=oc[n-1]-oc[j];
        ans=max(ans,(j-i+1)-cnt1+before+after);
        j++;
        //cout<<i<<" "<<j<<" "<<ans<<endl;
    }
    cout<<ans;
    return 0;
}