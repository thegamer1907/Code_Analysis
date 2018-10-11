#include <bits/stdc++.h>
using namespace std ;

int main()
{
	int n,m,c=0 ;
	cin >> n >> m ;
	string tn[n], tm[m] ;
	for (int i = 0; i < n; ++i)
		cin >> tn[i] ;
	for (int i = 0; i < m; ++i)
	{
		cin >> tm[i] ;
	}
	sort(tn,tn+n) ;
	for (int i = 0; i < m; ++i)
		if ( binary_search(tn,tn+n,tm[i]) )
			c++ ;
	m-=c ;
	n-=c ;
	if (c&1)
		cout << ( (m>n)? "NO":"YES") ;
	else
		cout << ( (n>m)? "YES":"NO") ;
	return 0;
}