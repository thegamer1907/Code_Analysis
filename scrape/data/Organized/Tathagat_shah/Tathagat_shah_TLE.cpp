#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(void)
{
    long long int i,j,n,m,k,ans=0,curr;
    cin>>n>>m>>k;
    long long int p[m];
    
    for(i=0;i<m;i++)
    {
        cin>>p[i];
    }
    curr=k;
    i=0;
    while(1)
    {
        if(p[i]<=curr)
        {
            j=0;
            while(p[i]<=curr && i<m)
            {
                i++;
                j++;
            }
            
            ans++;
            curr=curr+j;
        }
        
        else
        {
            curr=curr+k;
        }
        
        if(i>=m)
        break;
    }
    
    cout<<ans<<endl;
        
    
    
    
  
}