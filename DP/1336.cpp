#include<bits/stdc++.h>
using namespace std;
#define ll  long long
typedef long double LD;
const int N = 1e7+2 , M=N;
const int mod=1000000007;
ll ans;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n;
    int a[n],h[n];
    memset(h,0,sizeof(h));
    for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
    if(a[0])
        h[0]=1;
    else
        h[0]=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]==1)
            h[i]=h[i-1]+1;
        else
            h[i]=h[i-1];
    }
    int x,y;
    int c=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        //cout<<h[i]<<" ";
       if(i==0)
        c=0;
        else
            c=h[i-1];
        for(int j=i;j<n;j++)
        {
            if(a[j]==0)
                c++;
            if(ans<(c+h[n-1]-h[j]))
            {
                ans=c+h[n-1]-h[j];
            }
        }
    }
    cout<<ans;
}
