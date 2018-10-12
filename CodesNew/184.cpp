#include <iostream>
using namespace std;
long n,m,i,a[1000000],s,j;
main()
{
	ios_base::sync_with_stdio(false);
	cin>>n>>m;
	j=n;
	while(n--)
	{
	 cin>>a[n+1],s+=a[n+1];
	 if (s>m) s-=a[j--];
	 i=max(i,j-n);
	}
	cout<<i<<'\n';
}
