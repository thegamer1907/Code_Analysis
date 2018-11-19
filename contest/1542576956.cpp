//Perfection is not attainable,but if we chase perfection we can catch excellence.
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define DHOKHA ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
ll a[100005][5];
ll exist[16];
ll b[100005];
int main()
{
   DHOKHA;
   ll n,k;
   cin>>n>>k;
   ll i,j;
   for(i=0;i<=n-1;i++)
   {
   	ll sum=0;
   	for(j=0;j<=k-1;j++)
   	{
   		cin>>a[i][j];
   		if(a[i][j]==1)
   		{
   			sum=sum+pow(2,j);
   		}
   	}
   	b[sum]+=1;
   	exist[sum]=1;
   	
   	
   }
   if(b[0]>=1)
   {
   	cout<<"YES";
   	return(0);
   }
   for(i=0;i<=15;i++)
   {
   	
   	if(exist[i]==1)
   	{
   		
   		ll h=0;
   		for(j=0;j<=15;j++)
   		{
   		   
   			if(exist[j]==1 && (j&i)==0)
   			{
   				
   				h=1;
   			}
   		}
   		
   		if(h==1)
   		{
   			cout<<"YES";
   			return(0);
   		}
   	}
   }
   cout<<"NO";
}

