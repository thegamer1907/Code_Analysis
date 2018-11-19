#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;


int main()
{
    string s; cin >> s;
    
    int n; cin >> n;
    
    bool    a = false,
            b = false;
	
    for (int i = 0; i < n; ++i) {
        string x; cin >> x;
        if (x[1] == s[0]) {a = true;}
        if (x[0] == s[1]) {b = true;}
		if (x == s)			{a = true; b = true;}
    }
    
    if (a && b) {cout << "YES\n";}
    else        {cout << "NO\n";}
    
    return 0;
}