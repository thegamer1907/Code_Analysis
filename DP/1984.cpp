#include <bits/stdc++.h>
using namespace std;
#define slow ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define loop(x,n) for(int x=0;x<n;x++)
int n,m,a[100009],rep[100009],x;
int main()
{ slow;
    cin>>n>>m;
    loop(i,n)
    {
        cin>>a[i];
    }
    rep[a[n-1]]=1;
    a[n-1]=1;
    for(int i=n-2; i>=0; i--)
    {
        if(rep[a[i]]==0)
        {
            rep[a[i]]=1;
            a[i]=a[i+1]+1;

        }
        else a[i]=a[i+1];
    }
    loop(i,m)
    {
        cin>>x;
        cout<<a[x-1]<<"\n";
    }
}





