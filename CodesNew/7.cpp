#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, l, i, x;

    cin>>n>>l;
    ll a[n+2];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    x = a[0]*2;
    for(i=1;i<n;i++)
        if(abs(a[i-1]-a[i]) > x)
            x = abs(a[i-1]-a[i]);
    x = max(x, abs(l-a[n-1])*2);
    double d = (double)x;
    printf("%.12lf\n", d/2.0);
    //main();
    return 0;
}
