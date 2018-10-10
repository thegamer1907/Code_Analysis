//ABP
#include <bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int (i)=(a);(i) < (b); ++(i))
#define rof(i,a,b) for(int (i)=(a);(i) > (b); --(i))
#define all(a) a.begin() , a.end()
#define int long long
#define pb push_back
#define endl "\n"
#define S  second
#define F  first

const int maxn=1e6,delta=10253;
int nums[maxn];
int32_t  main(){
     ios_base::sync_with_stdio(false),cout.tie(0),cin.tie(0);
    int n,s=0;cin>>n;
    vector<int>ans;
    For(i,0,n){cin>>nums[i];s+=nums[i];ans.pb(s);}
    int q;cin>>q;
    while(q--){
      int x;cin>>x;
      int k=lower_bound(ans.begin(),ans.end(),x)-ans.begin()+1;
      cout<<k<<' ';
    }
}
