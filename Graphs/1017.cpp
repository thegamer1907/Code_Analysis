#include <iostream>
#include <vector>

using namespace std ;

int c = 1 ;
int main()
{
	int n , m ;
	cin >> n >> m ;
	int a[n] ;
	for ( int i = 1 ; i <= n - 1 ; ++i )
	{
		cin >> a[i] ;
	}
	while(c < m)
	{
		c += a[c] ;
		if( c == m )
		{
			cout << "YES" ;
			return 0 ;
		}
	}
	cout << "NO" ;
}