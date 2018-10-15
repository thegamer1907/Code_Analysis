//
#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
lli getIndex (lli count[], lli left, lli right, lli value)
{
    lli ans=-1;
    while (left<=right) {
        lli mid=(left+right)/2;
        if (count[mid]<=value) {
            ans=mid;
            left=mid+1;
        }
        else {
            right=mid-1;
        }
    }
    return ans;
}
int main ()
{
    lli n, q;
    cin>>n>>q;
    lli w[n], a[q];
    for (int i=0; i<n; i++) {
        cin>>w[i];
    }
    for (int i=0; i<q; i++) {
        cin>>a[i];
    }
    lli count[n];
    count[0]=w[0];
    for (int i=1; i<n; i++) {
        count[i]=w[i]+count[i-1];
    }
    lli curr=0, rem=0, ans, sum=0;
    for (int i=0; i<q; i++) {
        sum+=a[i];
        lli index=getIndex(count, 0, n-1, sum);
        if (index==n-1) {
            ans=n;
            sum=0;
            index=0;
        }
        else {
            ans=n-1-index;
        }
        cout<<ans<<endl;
    }
    return 0;
}
