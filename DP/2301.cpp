#include <bits/stdc++.h>
#define For(a,b,c) for(int (a)=(b);(a)<(c);++(a))
#define rof(a,b,c) for(int (a)=(b);(a)>(c);--(a))
#define all(a) a.begin(),a.end()
#define pb push_back
#define int long long
#define S second
#define F first
#define endl "\n"
using namespace std;
const int maxn=1e6;
int dp[maxn];
int32_t main(){
ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL);
 int n,m;cin>>n>>m;
 map<int,int>mp;
 vector<int>num;
 For(i,0,n)
 {
     int f;cin>>f;
     mp[f]++;
     num.pb(f);
 }
 int ans=mp.size();
 dp[0]=mp.size();
 For(i,0,n-1)
 {
     mp[num[i]]--;
     if(mp[num[i]]==0)
        --ans;
     dp[i+1]=ans;
 }
 For(i,0,m)
 {
     int f;cin>>f;
     cout<<dp[f-1]<<endl;
 }


}
