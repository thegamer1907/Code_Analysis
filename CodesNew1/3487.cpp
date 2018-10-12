#include <bits/stdc++.h>
using namespace std;

main()
{
	int n, m, a[100];
	
	cin>>n>>m;
	for (int i=0; i<n; ++i) cin>>a[i];
	
	int amax=*max_element(a,a+n);
	int acan=amax*n-accumulate(a,a+n,0);
	int kmin=amax+(m<=acan? 0: (m-acan+n-1)/n);
	int kmax=amax+m;
	
	cout<<kmin<<" "<<kmax<<endl;
}