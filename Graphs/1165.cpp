#include <bits/stdc++.h>
using namespace std;
int n,k,a[100000+5],x=1;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // freopen("important.in","r",stdin);

	cin>>n>>k;
    for (int i=1;i<n;++i)
        cin>>a[i];
    while (x<k)
       x+=a[x];

    if (x==k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

          return 0;
}
