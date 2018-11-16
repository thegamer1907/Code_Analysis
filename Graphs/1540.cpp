//Sachinam Srivastava
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i,j,k,m,l,x,y,a[100000],b,c,flag=0;
    cin>>n>>t;
    for(i=1;i<n;i++)
    cin>>a[i];
    for(i=1;i<n||i>t;)
    {
        if(a[i]==0)
        break;
        else
        {
            i=i+a[i];
            if(i==t)
            {
                flag=1;break;
            }
        }
    }
    if(t==1)
    cout<<"YES\n";
    else
    {
        if(flag==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}
