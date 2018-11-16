#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	int n, m;
	while(cin >> n >> m)
	{
		int a[n];		
		for(int i = 0; i < n; ++i)
		{
			int value;
			cin >> value;	
			a[i] = value;
		}
		
		// Calculate solution
		int  solution[n];
		// We use a map to count just distinct numbers
		map<int,bool> different;
		for(int i = n - 1; i >= 0; i--)
		{				
			different[a[i]] = true;
			solution[i] = different.size();
		}
		
		for(int i = 0; i < m; ++i)
		{
			int value;
			cin >> value;			
			cout << solution[value - 1] << endl;
		}
	}
}