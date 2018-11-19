//YEEEESSSS
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
#define pb push_back
using namespace std;
const int N = 1e5;
//NOOOOOOOOO
int mrk[N];
int main()
{
	string s, t;  int n;
	cin >> s >> n;
	
	for(int i = 0; i < n; i++){
		cin >> t;
		if(s == t)
			mrk[0] = mrk[1] = 1;
			
		if(t[0] == s[1])
			mrk[0] = 1;
		if(t[1] == s[0])
			mrk[1] = 1;
	}
	
	if(mrk[0] && mrk[1])
		cout << "YES";
	else	
		cout << "NO";
	
	return 0;
	
	
	
}
