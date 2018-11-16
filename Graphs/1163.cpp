#include <bits/stdc++.h>
using namespace std;
int n,k,a[30005];
int main()
{
    cin>>n>>k;
    for(int i=1; i<n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i+=a[i])
       {
        if(i==k)
            return cout<<"YES\n",0;
        if(i>k || i==n)
            break;
       }
    cout<<"NO\n";
}
