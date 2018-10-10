#include <bits/stdc++.h>

using namespace std;

int main()
{
long long int l,m,n,i,mx;
    double d_s,d_e,f;
    while(cin>>n>>m)
    {
        mx=0;
        long long int ara[n];
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        for(i=1;i<n;i++){
            mx=max(mx,(ara[i]-ara[i-1]));
        }
        f=(double)mx/2.000;
        d_s=double(ara[0]-0.00);
        f=max(f,d_s);
        d_e=double(m-ara[n-1]);
        f=max(f,d_e);
        cout<<setprecision(10)<<fixed<<f<<endl;
    }
    return 0;
}
