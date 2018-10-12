#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (ll)1000000007

int main() 
{
   int n;
   cin>>n;
   string a[n+1];
   for(int i=1;i<=n;i++)
    cin>>a[i];
   string ans[n+1];
   for(int i=1;i<=n;i++)
   {
    string z="#";
    ans[i]+=z;
   }
   ans[n]+=a[n];
   for(int i=n-1;i>=1;i--)
   {
    string x=a[i];
    string y=a[i+1];
    int k=min(x.size(),y.size());
    int indx=k+1;
    bool z=false;
    for(int j=1;j<=k;j++)
    {
        if(y[j]<x[j])
        {
           // z=true;
            indx=j;
            break;
        }
        else if(x[j]<y[j])
        {
            z=true;
            break;
        }
        else;
    }
    if(!z&&indx!=k+1)
    a[i].erase(a[i].begin()+indx,a[i].end());
   }
   for(int i=1;i<=n;i++)
    cout<<a[i]<<endl;
   return 0;
}