#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,b,x=1e5,a=0;
    cin>>n>>m;
    int check[x+1]={0},ans[n],arr[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    for(int i=n-1;~i;--i)
    {
        if(check[arr[i]]==0)
            ++a,ans[i]=a,check[arr[i]]=1;
        else
            ans[i]=a;
    }
    while(m--)
    {
        cin>>b;
        cout<<ans[b-1]<<"\n";
    }
    return 0;
}
