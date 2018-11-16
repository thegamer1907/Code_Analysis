#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    LL n;
    cin>>n;
    
    LL arr[n+1];
    
    LL i,j;
    
    for(i=1;i<=n;i++)
    cin>>arr[i];
    
    LL ones[n+1];
    LL zeroes[n+1];
    
    for(i=0;i<=n;i++)
    {
        ones[i]=0;
        zeroes[i]=0;
    }
    
    for(i=1;i<=n;i++)
    {
        if(arr[i]==1)
        ones[i]=ones[i-1]+1;
        
        else
        ones[i]=ones[i-1];
        
        if(arr[i]==0)
        zeroes[i]=zeroes[i-1]+1;
        
        else
        zeroes[i]=zeroes[i-1];
        
    }
    
    LL ans=0;
    
    
    
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            ans=max(ans,ones[n]-(ones[j]-ones[i-1])+(zeroes[j]-zeroes[i-1]));
        }
    }
     
    cout<<ans<<"\n";       
}