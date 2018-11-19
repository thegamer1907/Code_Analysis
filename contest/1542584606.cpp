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
    int h, b, c, t1, t2; cin >> h >> b >> c >> t1 >> t2;
    
	int a;
	if (h == 12)	{a = 0;}
	else			{a = h * 5;}
	
	int mi, ma;
	if (t1 == 12)		{mi = 0; ma = t2 * 5;}
	else if (t2 == 12)	{mi = 0; ma = t1 * 5;}
	else				{mi = min(t1, t2) * 5; ma = max(t1, t2) * 5;}
    
    bool y = true;
    for (int i = mi; i < ma; ++i) {
        if (i == a || i == b || i == c) {y = false;}
    }
    
    if (y) {
        cout << "YES\n";
        return 0;
    }
    
    y = true;
    for (int i = 0; i < mi; ++i) {
        if (i == a || i == b || i == c) {y = false;}
    }
    for (int i = ma; i < 60; ++i) {
        if (i == a || i == b || i == c) {y = false;}
    }
    
    if (y) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}