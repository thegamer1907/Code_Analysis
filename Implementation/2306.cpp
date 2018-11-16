#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{
	int n , sum = 0 ;
	string s ; 
	cin>> n ; 
	cin >> s ;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == s[i+1])
		{
			sum += 1  ;
		}
	}
	cout << sum ;
	return 0 ;
}
