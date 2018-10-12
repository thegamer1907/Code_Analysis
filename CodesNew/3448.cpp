#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int mxk = 0, mnk =0;
    for(int i=0;i<n;i++)
        {cin>>a[i];
    
        }
    sort(a,a+n);
    mxk = m + a[n-1];
    int i=0;
       while(m>0 && i<n)
        {
            m -= (a[n-1] - a[i]);
            i++;
        }
    if(m<=0)
        mnk = a[n-1];
    else
        {
            mnk = a[n-1] + ceil(((double)(m))/n);
        }
    cout<<mnk<<" "<<mxk<<"\n";
    return 0;
    
}