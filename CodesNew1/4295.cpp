#include<bits/stdc++.h>
using namespace std ;
const int maxn = 500 * 1000 + 100 ;
map < char , int > m ;
string s [maxn] ;
int n ;
int main()
{
	cin >> n ;
	for ( int i = 0 ; i< n ; i++)
		cin >> s[i] ;
	for ( int i = n-1 ; i>0 ; i--)
	{
		if ( s[i] < s[i-1] ) 
		{
			string y = "" ;
			for ( int j = 0 ; j< s[i-1].size() ; j++)
			{
				if ( s[i-1][j] > s[i][j] ) 
				{
					s[i-1] = s[i-1].substr ( 0 , j ) ;
					break ;
				}


			}
		}
	}
	for ( int i = 0 ; i< n ; i++)
		cout << s[i] << endl;


}