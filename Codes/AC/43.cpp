/*   You have lost, my dear   */

#include<bits/stdc++.h>
#pragma GCC optimize("O2")
#define eps 1e-10
using namespace std;
int n,l;
double v[1002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>l;
    for(int i=1;i<=n;++i)
    {
        int nr;
        cin>>nr;
        v[i]=nr;
    }
    sort(v+1,v+n+1);
    double b=0.00000;
    double e=1e9;
    double sol=1e9;
    while(e-b>=eps)
    {
        double mid=(b+e)*0.50000;
        bool good=1;
        if(!(v[1]<=mid) || !(0.0+l-v[n]<=mid))
            good=0;
        if(good)
            for(int i=1;i<n;++i)
            {
                double dif=v[i+1]-v[i];
                if(dif>2.0000*mid)
                    good=0;
            }
        if(good)
            sol=mid,e=mid;
        else
            b=mid;
    }
    cout<<fixed<<setprecision(11)<<sol;
    return 0;
}
