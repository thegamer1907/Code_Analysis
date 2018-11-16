#include "bits/stdc++.h"
#include<sstream>
#include<string>
#define pi 3.141592653589793238462
#define limit 100005
#define mod 1000000007
typedef unsigned long long ulli;
typedef long long int lli;
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli n,m,i,j,k,e,count=0,cover;
    cin>>n;

    lli a[n],b[n];

    for(i=0;i<n;i++)
    {
      cin>>a[i]>>b[i];
    }

    cover=a[0];
    count=2;

    for(i=1;i<n-1;i++)
    {
      if((a[i]-b[i])>cover)
      {
          count++;
          cover=a[i];
      }
       else if((a[i]+b[i])<a[i+1])
       {
           count++;
           cover=a[i]+b[i];
       }
       else
        cover=a[i];
    }
    if(n>=2)
    cout<<count<<endl;
    else
        cout<<1;
}
