#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//freopen("input.in", "r", stdin);
	char a, b;
	cin >> a >> b;
	bool bol = 0, col = 0;
	int n; cin >> n;
	for(int i = 0; i < n; i++)
	{
		char c, d;
		cin >> c >> d;
		if(c == a && d == b)
		{
			bol = 1;
			col = 1;
		}
		if(d == a)
			bol = 1;
		if(c == b)
			col = 1;
	}
	if(col&&bol)
		cout << "YES\n";
	else
		cout << "NO\n";
}




