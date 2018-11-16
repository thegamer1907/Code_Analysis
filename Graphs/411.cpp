#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>

using namespace std;
int main()
{
	long long n,t,i,j;
	string s;
	cin >> n >> t;	
	cin >> s;
	for (i = 1; i <= t; i++){
		for (j = 0; j < n; j++){
			if (s[j] == 'B' && s[j + 1] == 'G'){
				swap (s[j], s[j + 1]);  ++j;
			}
		}
	}
	cout << s <<endl;
}
