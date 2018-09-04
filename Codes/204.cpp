#include <bits/stdc++.h>
using namespace std ;
int n , a , s ;
pair <int , int > p ;
set <pair <int , int > >	st ;
int main()
{
	scanf("%d",&n);
	for ( int i = 0 ; i < n ; i ++ )
	{
		scanf("%d",&a);
		s += a ;
		st.insert ( make_pair ( s , i + 1 ) ) ;
	}
	scanf("%d",&n);
	for( int i = 0 ; i <  n ; i ++ )
	{
		scanf("%d",&a);
		p = *st.lower_bound( make_pair ( a , 0 ) ) ;
		cout << p.second << endl ;
	}
	return 0 ; 
}
