#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main()
{
	 string s ;
	 cin >> s ;
	 long long int i , j , m = 0 , n = 0;
	 for(i = 0 ; i < s.length() ; i++)
	 {
	 	if(s[i] == '1')
	 	{
	 			m = 0 ;
	 	}
	 	else
	 	{
	 			m++ ;
	 	}

	 	if(m >= 7)
	 	{
	 			cout << "YES" << endl ;
	 			j = 0 ;
	 			break ;
	 	}
	 	else
	 	{
	 			j = 1 ;
	 	}

	 }

	 if(j == 1)
	 {
	 	for(i = 0 ; i < s.length() ; i++)
	 	{
	 		if(s[i] == '0')
	 		{
	 			n = 0;
	 		}
	 		else 
	 			n++ ;
	 		if(n >= 7)
	 		{
	 			cout << "YES" << endl ;
	 			j = 0 ;
	 			break ;
	 		}
	 	}
	 	
	 }
	 if(j == 1)
	 	cout << "NO" << endl ;
	return 0 ; 	
}