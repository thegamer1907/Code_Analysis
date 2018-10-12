#include <bits/stdc++.h>
using namespace std;

main()
{ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
       int n; cin>>n; int a[n];
       for (int i=0;i<n;i++)
        cin>>a[i];
       sort(a,a+n);
       int cnt=0,j=0;
       for (int i=0;i<n;i++)
       {
           if (a[i]>=2*a[j]) j++;
       }
       j=min(j,n/2);
       cout<<n-j;

}
