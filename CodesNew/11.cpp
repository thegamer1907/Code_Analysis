#include <bits/stdc++.h>
using namespace std;
 int n,k;
double a[1000+5],m;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // freopen("important.in","r",stdin);

	cin>>n>>k;
    for (int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);

    m=a[0];
     for (int i=1;i<n;i++)
        m=max(m,(a[i]-a[i-1])/2);
     m=max(m,k-a[n-1]);

     cout<<fixed<<setprecision(10)<<m<<endl;

          return 0;
}
