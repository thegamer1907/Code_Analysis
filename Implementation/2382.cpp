#include <bits/stdc++.h>
using namespace std;
int n,k,ans;
int main()
{
    cin>>n>>k;
    k=240-k;
    for(int i=1;i<=n;i++)
        if(5*(i*(i+1)/2)<=k)
            ans=i;
        else break;
    cout<<ans;
}

