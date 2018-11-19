/*In The Name of GOD*/
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
const int N = 1e5;
bool mrk[5];
int main()
{
	string s;  int n;
	cin >> s >> n;
	
	while(n--){
		string t;
		cin >> t;
		if(s == t)
			mrk[0] = mrk[1] = true;
			
		if(t[0] == s[1])
			mrk[0] = true;
		if(t[1] == s[0])
			mrk[1] = true;
	}
	
	if(mrk[0] && mrk[1])
		return cout << "YES", 0;
		
	cout << "NO";
	
	return 0;
}

