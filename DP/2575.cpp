#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i>=b;i--)
#define loopm(i,a,b,step) for(int i=a;i<b;i+=step)
#define loopbm(i,a,b,step) for(int i=a;i>=b;i-=step)
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define INF 1000000007
#define MOD 1000000007
#define BINF 1000000000000000001
#define int long long int
#define double long double

using namespace std;



#undef int
int main()
{
#define int long long int
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
   // freopen("input.txt","r",stdin);
    
 	int n;
 	cin>>n;
 	int a[n+1];
 	a[0]=0;
 	loop(i,1,n+1) cin>>a[i];
 	
 	int dp[n+1];
 	dp[0]=0;
 	loop(i,1,n+1)
 	{
 		if(a[i]>a[i-1]) dp[i]=dp[i-1]+1;
 		else dp[i]=1;
 	}
 	
 	int ans=*max_element(dp+1,dp+n+1);
 	cout<<ans;
    return 0;
}