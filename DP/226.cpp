#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    for (int i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int i=n-1,j=m-1,ans=0;
    while (i>=0&&j>=0)
    {
        if (abs(a[i]-b[j])<=1)
        {
            i--;j--;ans++;
        }
        else if (a[i]<b[j]+1)
            j--;
        else if (a[i]>b[j]+1)
            i--;
    }
    cout<<ans;
}
