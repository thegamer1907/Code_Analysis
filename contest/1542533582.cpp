#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#define  ll long long int
using namespace std;

int min(int a, int b)
{
	if (a < b)
		return a;
	return b;
}
int main()
{
	string pwd;
	cin >> pwd;
	int n;
	cin >> n;
	vector<string > v;
	while (n--)
	{
		string temp;
		cin >> temp;
		if (temp[0] == pwd[0] || temp[0] == pwd[1] || temp[1] == pwd[0] || temp[1] == pwd[1])
		{
			v.push_back(temp);
		}
	}
	//ab sirf 2 cases bante h
//	1) k same pswd mil hi jaye us string me 
	//2) k pwd ka first ek string ka last ho and pwd ka second ek string ka first ho
	//for case 1
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].compare(pwd) == 0)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	//for case 2
	bool first = 0, last = 0;
	for (int i = 0; i < v.size(); i++)
	{
		string s = v[i];
		if (s[0] == pwd[1])
			last = 1;
		if (s[1] == pwd[0])
			first = 1;
		if (first == 1 && last == 1)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}