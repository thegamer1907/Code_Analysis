#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n, t;
	std::string s;
	char temp;
	std::cin>>n>>t;
	std::cin>>s;
	while(t--)
	{
		for(int i = 1; i < s.length(); i++)
		{
			if(s[i] > s[i-1])
			{
				temp = s[i];
				s[i] = s[i-1];
				s[i-1] = temp;
				i++;
			}
		}
	}
	std::cout<<s;
	return 0;
}