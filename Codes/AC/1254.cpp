#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	int n,m, c = 0;
	cin >> n >> m;

	set<string> s;
	for(int i = n-1; i >= 0; i--)
	{
		string tmp;
		cin >> tmp;
		s.insert(tmp);
	}

	for(int j = m-1; j >= 0; j--)
	{
		string tmp;
		cin >> tmp;

		if( s.find(tmp) != s.end() )
			c++;
	}

	if( (n-c)+(c+1)/2 > (m-c)+(c)/2 )
		puts("YES");
	else
		puts("NO");

	return 0;
}