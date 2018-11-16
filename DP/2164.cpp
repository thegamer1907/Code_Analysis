#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,b,x=1e5,a=0;
    cin>>n>>m;
    int check[x+1]={0},arr[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    for(int i=n-1;~i;--i)
    {
        if(check[arr[i]]==0)
            check[arr[i]]=1,arr[i]=++a;
        else
            arr[i]=a;
    }
    while(m--)
    {
        cin>>b;
        cout<<arr[b-1]<<"\n";
    }
    return 0;
}
