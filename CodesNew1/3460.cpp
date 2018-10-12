#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,m;
    cin>>n>>m;
    long long int a[n];
    long long int s=0,max1=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
        if(a[i]>max1)
            max1=a[i];
    }
    long long int kmin,kmax;
    s+=m;
    kmin = ceil((float)s/(float)n);
    kmax = max1+m;
    cout<<max(max1,kmin)<<" "<<kmax<<endl;
    return 0;
}