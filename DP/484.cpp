//http://codeforces.com/problemset/problem/489/B
//B. BerSU Ball

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int match(vector <int> & boy, vector <int> & girl);

int main(void)
{
	int n, m;
	cin >> n;
	vector <int> boy(n);
	for (int i = 0; i < n; ++i)
		cin >> boy[i];

	cin >> m;
	vector <int> girl(m);
	for (int i = 0; i < m; ++i)
		cin >> girl[i];

	sort(boy.begin(), boy.end());
	sort(girl.begin(), girl.end());

	cout << match(boy, girl) << endl;

	return 0;
}

int match(vector <int> & boy, vector <int> & girl)
{
	int g_count = 0;
	for (int i = 0; i < boy.size(); ++i)
		for (int j = 0; j < girl.size(); ++j)
			if (abs(boy[i] - girl[j]) <= 1){
				++g_count;
				girl[j] = 1000;//used
				break;
			}

	return g_count;
}