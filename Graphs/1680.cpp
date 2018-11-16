#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,s=0,i;
    cin>>n>>m;
    ll a[n+5];
    for(i=1; i<n; i++)
    {
        cin>>a[i];
    }
    a[n]=1;
    for( i = 1; i <= n; i += a[i])
    {
        if(i == m)
        {
           // puts("YES");
            s=1;
            break;
        }
    }

    // cout<<s<<endl;
    if(s==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
