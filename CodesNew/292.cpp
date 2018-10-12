#include <bits/stdc++.h>

using namespace std;



int main()
{
    long long n,t,i,m=0;
    cin>>n>>t;
    long long a[n],s[n];
    cin>>a[0];
    s[0]=a[0];
    for(i=1;i<n;i++)
    { cin>>a[i];
     s[i]=s[i-1]+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(s[i]-t<=0)
            m=max(m,i+1);
        else
        {
            long long x=s+i-lower_bound(s,s+n,s[i]-t);
         m=max(m,x);
        }
        
    }
  cout<<m;
    return 0;
}

