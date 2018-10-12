//
#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
const int inf=100000000000;
int main ()
{
    int n;
    cin>>n;
    lli a[n];
    for (int i=1; i<=n; i++) {
        cin>>a[i];
    }
    lli ans=0, time=inf;
    for (int i=1; i<=n; i++) {
        lli r=i+((a[i]-i+1)/n)*n;
        if ((a[i]-i+1)%n>0) {
            r+=n;
        }
        if (r<time) {
            time=r;
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}

