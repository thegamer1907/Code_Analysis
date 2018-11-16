#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main ()
{
	string s1 , s2 ;
	ll n , t ;
	cin >> n >> t >> s1 ;
	s2 = s1 ;
	for ( ll i = 1 ; i <= t ; i ++ )
	{
		for ( ll i = 0 ; i < n ; i ++ )
		{
			if ( s1[i] == 'B' && s1[i+1] == 'G' )
			{
				s2[i] = 'G' ;
				s2[i+1] = 'B' ;
			}
		}
		s1 = s2 ;
	}
	cout << s2 ;
}

