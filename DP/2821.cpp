#include 		<bits/stdc++.h>
#define ll      long long int
#define pb 		push_back
#define mp 		make_pair
#define F 		first
#define S 		second
#define MOD 	1000000007
#define pii 	pair<int,int>
#define vi 		vector<int>
#define fio		ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define N 		200010
using namespace std;

ll dp[2005][2005];
vector<ll> di[2005];

void init(){
    for(int i=1; i<=2000; i++){
        for(int j=i; j<=2000; j+=i){
            di[j].pb(i);
        }
    }
}

int main(){
    init();
    ll n,k;
    cin>>n>>k;
    memset(dp,0,sizeof dp);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            if(j==1){
                dp[i][j]=1;
                continue;
            }
            //cout<<i<<" zz ";
            for(auto it:di[i]){
                //cout<<it<<" ";
                dp[i][j]+=dp[it][j-1];
                dp[i][j]%=MOD;
            }
            //cout<<endl;
            //cout<<i<<" "<<j<<" xxx "<<dp[i][j]<<endl;
        }
    }
    ll ans=0;
    for(int i=1; i<=n; i++){
        ans+=dp[i][k];
        ans%=MOD;
    }
    cout<<ans;
}










