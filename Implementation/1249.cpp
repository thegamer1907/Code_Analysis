#include <bits/stdc++.h>

int main()
{
	int n,t;
	std::cin >> n >> t;
	std::string s;
	std::cin >> s;
	
	for(int x = 1; x <= t; x++)
	{
		for(int i = 0; i < n; i++)
		{
			if(s[i] == 'B')
			{
				if(s[i+1] == 'G')
				{
					std::swap(s[i],s[i+1]);
					i += 1;
				}
			}
		}
	}
	
	std::cout << s << '\n';
	return 0;
}
