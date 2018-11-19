#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n;
	cin >> n;
	int hash[26]={0};
	int f=0,g=0;
	while(n--)
	{
	    string s1;
	    cin >> s1;
	    if(s1[1]==s[0])
	    f=1;
	    if(s1[0]==s[1])
	    g=1;
	    if (s==s1) 
	    {f=1;g=1;}
	    
	}

	if (f and g)
	cout <<"YES";
	else
	cout <<"NO";
	return 0;
}