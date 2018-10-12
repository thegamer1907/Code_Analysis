#include<set>
#include<algorithm>
#include<iostream>
#include<string>
#include<iterator>
using namespace std;


int main()
{
	set<string>a;
	int n,m;
	cin >> n>>m;
	for (int i = 0; i < n+m; i++)
	{
		string h;
		cin >> h;
		a.insert(h);
	}
	if (n > m||n==m&&a.size()%2!=0)
		cout << "YES";
	else
		cout << "NO";


    return 0;
}

