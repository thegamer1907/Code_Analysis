#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <iterator>
#include <bitset>
#include <vector>
#include <math.h>
#include <queue>
#include <map>
#include <set>
#include <list>
#include <time.h>
#include <algorithm>
#define mkp make_pair
#define inf 1000000010
#define MOD 1000000007
#define MOD2 1000000013
#define eps 1e-11
#define PI 3.14

using namespace std;
typedef long long ll;

int n;
string str;
vector<string> vec;

bool check(string x)
{
	for (int i = 0; i < 3; i++)
	{
		if (x[i] == str[0] && x[i + 1] == str[1])
			return 1;
	}
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//ifstream cin("in.txt");
	cin >> str >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		vec.push_back(s);
	}
	for (int i = 0; i < n; i++)
	{
		string s = vec[i];
		for(int j = 0; j < n; j++)
		{
			string x = s + vec[j];
			if (check(x))
			{
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	//system("pause");
}