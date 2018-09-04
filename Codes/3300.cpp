#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    long long ans=1e18,ans0;
    for(int i=1;i<=n;i++)
    {
        long long step=(arr[i]+1)%n;
        if(step==0)step=n;
        if(step<=i)
            step=arr[i]+i-step;
        else step=arr[i]+n-step+i;
        
        if(step<ans)
        {ans=step;ans0=i;}
        
    }
    cout<<ans0<<endl;
   
    
    return 0;
}
