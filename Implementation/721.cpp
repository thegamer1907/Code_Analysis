#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

void replace(string &m, int f, int l)
{
	char t = m[f];
	m[f] = m[l];
	m[l] = t;
}
int main(){
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	for (int i = 0; i < k; i++)
	{
		for (int h = 0; h< s.length()-1; h++)
		if (s[h] == 'B' && s[h + 1] == 'G')
		{
			replace(s, h, h + 1);
			h+=1;
		}
	}
	cout << s;
	return 0;
}
