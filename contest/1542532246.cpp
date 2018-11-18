#include <bits/stdc++.h>

using namespace std;

	bool ready[2];
	string pw, aux;
int main()
{
	int n;
	cin >> pw >> n;
	while(n--)
	{
		cin.ignore();
		cin >> aux;
		if(aux == pw)
		{
			ready[0] = true;
			ready[1] = true;
		}
		else
		{
			if(aux[1] == pw[0])
				ready[0] = true;
			if(aux[0] == pw[1])
				ready[1] = true;
		}
	}
	if(ready[1] && ready[0])
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}