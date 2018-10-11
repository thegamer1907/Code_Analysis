#include <iostream>

using namespace std;

int n,t,v[100001],i,j,s,lmax=0;

int main()
{
    cin>>n>>t;
    for(i=0;i<n;++i)
        cin>>v[i];
    j=0;s=0;
    for(i=0;i<n;++i)
    {
        s+=v[i];
        while(j<=i&&s>t)
        {
           s-=v[j];
           ++j;
        }
        lmax=max(lmax,i-j+1);
    }
    cout<<lmax;
    return 0;
}
