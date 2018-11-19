#include <bits/stdc++.h>
using namespace std ;
long double b[3] ;
int a[5] ; 
void MOD ()
{
	a[0] %= 12 , a[1] %= 60 , a[2] %= 60 ; //, a[3] %= 12 , a[4] %= 12 ;
}
int main ()
{
	for (int i = 0 ; i < 5 ; i ++ )		cin >> a[i] ; 
	MOD() ; 
	b[2] = a[2] ;
	b[1] = a[1] + b[2] / 60 ; 
	b[0] = a[0] + b[1] / 60 ;
	b[0] *= 5 ;
	a[3] *= 5 , a[4] *= 5 ;
	sort ( b , b + 3 ) ;
	for (int i = 0 ; i < 3 ; i ++)
	{
		if ( a[3] >= b[i] && a[4] >= b[i] && a[3] <= b[ ( i + 1 ) % 3 ] && a[4] <= b[ ( i + 1 ) % 3 ] )
		{
			cout << "YES" ;
			return 0 ; 
		}
	}
	if ( ( a[3] >= b[2] || a[3] <= b[0] )  && ( a[4] >= b[2] || a[4] <= b[0] ))	cout << "YES" ; 
	else	cout << "NO" ; 
	cerr << endl ;
	//for (int i = 0 ; i < 3 ;i ++)	cerr << b[i] << ' ' ;
	return 0 ; 
}
