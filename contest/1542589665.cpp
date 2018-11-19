#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 105;
int n;
string goal , data[N];

void go()
{
	cout << "YES";
	exit(0);
}

int main()
{
	cin >> goal >> n;
	for(int i = 1; i <= n; i++) cin >> data[i];
	for(int i = 1; i <= n; i++)
		if(data[i][0] == goal[0] && data[i][1] == goal[1])
			go();
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			if(data[i][1] == goal[0] && data[j][0] == goal[1]) go();
	cout << "NO";
	
	return 0;
}
