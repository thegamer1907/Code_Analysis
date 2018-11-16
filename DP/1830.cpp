#include <iostream>
#include <stdio.h>
using namespace std ; 
int main() { 
	int a=0 , b=0  , A=0 , B=0 ; 
	string s ; 
	cin>>s ; 
	a=s.find("AB") ; 
	b=s.find("BA" , a+2 );
	if (a < s.size() && b<s.size() )
		return puts("YES") , 0 ; 
	A=s.find("BA") ;
	B=s.find("AB" , A+2 );
	if (A < s.size() && B<s.size() )
		return puts("YES") , 0 ; 
	puts("NO") ; 
	return 0 ; 
}