#include <iostream>

using namespace std;

int main()
{
	int n, t;
	string s;
	char temp;
	cin >> n >> t >> s;
	
	while(t--)
	{
		while(n != 0)
		{
			if(s[n - 1] == 'G' && s[n - 2] == 'B')
			{
				temp = s[n - 1];
				s[n - 1] = s[n - 2];
				s[n - 2] = temp;
				n -=2;
			} 
			else
			{
				n--;
			}
		}
		n = s.length();
	}
    cout << s;
	return 0;
}
