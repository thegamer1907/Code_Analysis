#include <iostream>
using namespace std;
long long int ivar[200009];
int n,q;
int bin (long long int val)
{
    int st=1,dr=n,ans=0,mij;
    while (st<=dr)
    {
        mij=(st+dr)/2;
        if (ivar[mij]<=val)
        {
            ans=mij;
            st=mij+1;
        }
        else
        {
            dr=mij-1;
        }
    }
    return ans;
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin>>n>>q;
    for (int i=1; i<=n; ++i)
    {
        int a;
        cin>>a;
        ivar[i]=ivar[i-1]+a;
    }
    long long int damag=0;
    for (int i=1; i<=q; ++i)
    {
        long long int a;
        cin>>a;
        damag+=a;
        int mort=bin(damag);
        if (mort<n)
        {
            cout<<n-mort<<"\n";
        }
        else
        {
            cout<<n<<"\n";
            damag=0;
        }
    }
    return 0;
}
