#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define freo freopen("gir.txt","r",stdin)
#define frec freopen("cik.txt","w",stdout)
using namespace std;
int dizi[120];
int dp[150];
int k=0,maxi=0,n;



int main()
{
	memset(dp,-1,sizeof(dp));
	cin>>n;
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&dizi[i]);
    	if(dizi[i]==1)
    	k++;
    	else
    	dizi[i]=-1;
    }
    dp[0]=-dizi[0];
    int maxi=dp[0];
	for(int i=1;i<n;i++)
    {
    	if(dp[i-1]-dizi[i]>-dizi[i])
    		dp[i]=dp[i-1]-dizi[i];
    	else
    	  	dp[i]=-dizi[i];
    	//printf("%d %d\n",i,dp[i]);
		maxi=max(maxi,dp[i]);
	}
	printf("%d",k+maxi);
	
    
return 0;
}


