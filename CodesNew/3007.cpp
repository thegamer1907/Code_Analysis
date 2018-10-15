#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int k;
string str;
const int N=1e7+5;
int pref[N];
vector<int> dp[N];
long long ans;
int main()
{

        cin>>k>>str;
       int  n=(int) str.size();
        for(int i=0;str[i];i++){

             pref[i+1]=pref[i]+(str[i]=='1');

             dp[pref[i+1]].pb(i+1);
        }
        for(int i=1;i<=n;i++){

             int add = dp[pref[i]+k-(str[i-1]=='1')].end()-lower_bound(dp[pref[i]+k-(str[i-1]=='1')].begin(),dp[pref[i]+k-(str[i-1]=='1')].end(),i);
             ans+=add;
        }

        cout<<ans<<"\n";

    return 0;
}
