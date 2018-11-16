#include<iostream>
#include<cmath>
#include <algorithm>
#include <vector>
using namespace std;



int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	char last = s[0];
	int c = 0;
	for(int i = 1; i < s.length(); i++)
	{
		if(s[i] == last) c++;
		else last= s[i];
	}
	cout << c;
}
