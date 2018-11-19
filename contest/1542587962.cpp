#include <iostream>
#include <string.h>
#include <string>
using namespace std;
bool check(string ,string );
int main()
{
	string s1,s2[110],temp;
	int n;
	cin >> s1 >> n;
	for(int i = 0;i < n;i++)
		cin >> s2[i];
	bool ok = false;
	for(int i = 0;i < n;i++)
	{
		for(int j = i ; j < n;j++)
		{
			temp = s2[i] + s2[j];
			if(check(temp,s1) == true) ok = true;
			temp = s2[j] + s2[i];
			if(check(temp,s1) == true) ok = true;
		}
	}
	if(ok) cout << "YES"<<endl;
	else cout << "NO"<<endl;
	return 0;
}
bool check(string temp,string s1)
{
	int i = 0;
	if(s1[0] == temp[0] && s1[1] == temp[1]) return true;
	if(s1[0] == temp[1] && s1[1] == temp[2]) return true;
	if(s1[0] == temp[2] && s1[1] == temp[3]) return true;
	return false;
}