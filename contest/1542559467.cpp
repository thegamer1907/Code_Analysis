#include <iostream>
#include <map>
#include <string> 
using namespace std;

int main() {
	string pass ;
	char sth [102];
	int t;
	bool zero = false , one = false ; 
	cin >> pass >> t ; 
	
	
	for (int i=0 ; i<t*2 ; i+=2)
	{
	cin >> sth[i]>>sth[i+1];
	if (sth[i] == pass[0] && sth[i+1]==pass[1])
		{
			cout << "YES";
			return 0;
		}
		
	if (sth[i+1]==pass[0]) //  pass ya , string ah oy to ha 
	zero = true ; 
	if (sth[i]==pass[1])
	one = true ; 
	
	if ( zero && one )
	break ;
	}
	
	if (zero && one )
		cout << "YES";
			else
		cout << "NO";

	return 0;
}