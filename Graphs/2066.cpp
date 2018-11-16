#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
using namespace std;
ll n,m,x,k=1,fix[100005];
pair<ll,ll> a[100005];
int main() 
{
    cin>>n>>m;
    a[0].F=n;
    while (a[x].F!=m)
    {
        if (a[x].F*2<=100000)
            if (fix[a[x].F*2]==0)
            {
                fix[a[x].F*2]++;
                a[k].F=a[x].F*2;
                a[k].S=a[x].S+1;
                k++;
                k%=100000;
            }
        if (a[x].F-1>0)
            if (fix[a[x].F-1]==0)
            {
                fix[a[x].F-1]++;
                a[k].F=a[x].F-1;
                a[k].S=a[x].S+1;
                k++;
                k%=100000;
            }
        x++;
        x%=100000;
    }
    cout<<a[x].S<<endl;
    return 0;
}