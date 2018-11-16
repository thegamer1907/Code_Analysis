#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main ()
{
	bool ba = 0 , ab = 0  ;
	string a ;
	cin >> a ;
	for ( ll i = 0 ; i < a.size() - 1 ; i ++ )
	{
		if ( ab == 1 && ba == 1 )
		{
			break ;
		}
		else
		{
			if ( a[i] == 'A' && a[i+1] == 'B' )
			{
				ab = 1 ;
				for ( ll j = i + 2 ; j < a.size() - 1 ; j ++ )
				{
					if ( a[j] == 'B' && a[j+1] == 'A' )
					{
						ba = 1 ;
					}
				}
				break ;
			}
		}
	}
	if ( ab == 1 && ba == 1 )
	{
		cout << "YES" ;
	}
	else
	{
		ab = 0 , ba = 0 ;
		for ( ll i = 0 ; i < a.size() - 1 ; i ++ )
		{
			if ( ab == 1 && ba == 1 )
			{
				break ;
			}
			else
			{
				if ( a[i] == 'B' && a[i+1] == 'A' )
				{
					ba = 1 ;
					for ( ll j = i + 2 ; j < a.size() - 1 ; j ++ )
					{
						if ( a[j] == 'A' && a[j+1] == 'B' )
						{
							ab = 1 ;
						}
					}
					break ;
				}
			}
		}
		if ( ab == 1 && ba == 1 )
		{
			cout << "YES" ;
		}
		else
		{
			cout << "NO" ;
		}
	}
}

