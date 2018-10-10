#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int n, m;
	cin >> n >> m;
	
	vector <string> polandBall(n);
	
	for(int i = 0; i < n; i++)
		cin >> polandBall[i];
	
	sort(polandBall.begin(), polandBall.end());
	
	int common = 0;
	for(int i = 0; i < m; i++)
	{
		string s;
		cin >> s;
		
		if(binary_search(polandBall.begin(), polandBall.end(), s))
			common++;
	}
	
	n -= common;
	m -= common;
	
	bool winner = 0;
	if(common & 1)
	{
		if(m > n)
			winner = 1;
		else
			winner = 0;
	}	
	
	else
	{
		if(n > m)
			winner = 0;
		else
			winner = 1;
	}
	
	cout << (winner? "NO\n" : "YES\n");
	return 0;
}