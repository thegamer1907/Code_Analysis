#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

bool poss(string s)
{
	bool flag1 = false;
	bool flag2 = false;
	int i = 0;
	for(;i < s.size() - 1;i++)
		if(s[i] == 'A' && s[i + 1] == 'B')
			break;
	for(int j = i + 2; j < s.size() - 1 ; j++)
		if(s[j] == 'B' && s[j + 1] == 'A')
			flag1 = true;

	i = 0;
	for(;i < s.size() - 1;i++)
		if(s[i] == 'B' && s[i + 1] == 'A')
			break;
	for(int j = i + 2; j < s.size() - 1 ; j++)
		if(s[j] == 'A' && s[j + 1] == 'B')
			flag2 = true;

	return flag1 || flag2;
}
int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	
	if(poss(s))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}