#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


int main() 
{ 

	long long n; 
	int m, k;

	cin >> n >> m >> k;

	queue<long long> q;

	long long in;
	for (int i = 0; i < m; i++)
	{
		cin >> in;
		q.push(in);
	}

	int steps = 0;
	int deleted = 0;
	
	while (!q.empty())
	{
		int b = (q.front() - deleted - 1) / k;
		int cnt = 0;

		while (!q.empty() && (q.front() - deleted - 1) / k == b)
		{
			q.pop();
			cnt++;
		}

		deleted += cnt;
		steps++;
	}

	

	cout << steps;

    return 0; 
}