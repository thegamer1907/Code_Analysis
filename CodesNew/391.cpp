#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,d;
    cin>>n>>t;
    vector<long long > a(n);
    for(long long i=0;i<n;i++)
    cin>>a[i];

    long long s=0,i,max1=0,j=0;
    for(i=0;i<n&&j<n;)
    {
        s+=a[j];
        if(s>t)
        {
            d=j-i;
            max1=max(max1,d);
            s-=a[i];i++;
        }
        else if(j==n-1&&s<=t)
        {
            d=j-i+1;
            max1=max(max1,d);
        }
        j++;
    }
    cout<<max1;
}
