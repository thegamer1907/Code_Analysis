#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define mp make_pair
#define mod (ll)1000000007
#define f first
#define s second
#define inf (ll)1e15
#define pi pair<int,int>
#define pii pair<int,pi>
#define pb push_back
#define mxn 100010


int main(){
    sp;
int n,k;
cin>>n>>k;
string s;
cin>>s;
int dp[n][2];
memset(dp,0,sizeof dp);
if(s[0]=='a')
    dp[0][0]=1;
else dp[0][1]=1;
for(int i=1; i<n; ++i){
        dp[i][0]=dp[i-1][0];
dp[i][1]=dp[i-1][1];
    if(s[i]=='a')
    dp[i][0]+=1;
    else
        dp[i][1]+=1;
}
int ans=-1,i=0,j=0;
while(i<n){
    while(i+1-j-(dp[i][0]-(j==0?0:dp[j-1][0]))>k)
        ++j;
    ans=max(ans,i+1-j);
        ++i;
}
i=0,j=0;
while(i<n){
    while(i+1-j-(dp[i][1]-(j==0?0:dp[j-1][1]))>k)
        ++j;
    ans=max(ans,i+1-j);
    ++i;
}
cout<<ans;

return 0;}
