#include <bits/stdc++.h>
using namespace std;
int f[101],k,kq,n,i,j;
int main()
{
    //freopen("ntu.inp","r",stdin);
    //freopen("ntu.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        f[i]=f[i-1]+k;
    }
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
            kq=max(kq,i-j+1-(f[i]-f[j-1])+f[j-1]+f[n]-f[i]);
    cout<<kq;
}
