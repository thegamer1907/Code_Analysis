#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n,m,max=0,ans,sum=0,k;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        sum+=k;
        if(k>max) max=k;
    }
    sum+=m;
    ans=sum/n;
    if(sum%n>0) ans++;
    if(ans<max)
    cout<<max<<" "<<(max+m);
    else
    cout<<ans<<" "<<(max+m);
}	