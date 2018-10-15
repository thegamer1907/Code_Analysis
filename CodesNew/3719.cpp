#include<bits/stdc++.h>
//C:\Users\prana\Desktop\C++\CodeForcesQs
using namespace std;
main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,ans1,ans2;
	cin>>n>>m;
	int a[n];
	for (int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ans2=a[n-1]+m;
    for (int i=0;i<n-1;i++)
    {
        m-=a[n-1]-a[i];
        if (m<=0)
        {
            ans1=a[n-1];break;
        }
    }
    ans1=a[n-1];
    if (m>0)
    {
        ans1+=(m+n-1)/n;
    }
    cout<<ans1<<" "<<ans2;
}
