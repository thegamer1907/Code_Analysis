#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mem(a,b) memset((a),(b),sizeof(a))
const int INF=0x3f3f3f3f;
const int N=1e6+5;
const int M=1e7+5;
int  vis[M]={0};
bool not_prime[M]={false};
int dp[M]={0};
void prime()
{
    for(int i=2;i<M;i++)
    {
        if(!not_prime[i])
        {
            dp[i]+=vis[i];
			for(int j=i+i;j<M;j+=i)
            not_prime[j]=true,dp[i]+=vis[j];
        }
    }
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		vis[x]++;
	}
	
	prime();
	for(int i=2;i<M;i++)dp[i]+=dp[i-1];
	int m,l,r;
	cin>>m;
	while(m--)
	{
		cin>>l>>r;
		if(l>M)l=M-1;
		if(r>M)r=M-1;
		cout<<dp[r]-dp[l-1]<<endl;
	} 
	return 0; 
} 