#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
main ()
{
	int m, n, k1, k2, p=0, i=0, l;
	cin>>n>>m;
	vector <int> a(n);
	for (i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	k2=a[n-1]+m;
	for (int i=0; i<n; i++){
	while(a[i]<a[n-1] && p<=m){
	a[i]++;
	p++;
	}
}
    if (p>m) p--;
	if (p==m) k1=a[n-1];
	else 
	{
		l=(m-p)/n;
		if((m-p)%n!=0) k1=a[n-1]+l+1;
		else k1=a[n-1]+l;
	}
    cout<<k1<<" "<<k2;
}
