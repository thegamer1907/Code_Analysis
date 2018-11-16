#include <iostream>
using namespace std;

int main()
{
	string s;
	int N, t;
	cin >> N >> t >> s;
	for(int i = 0; i < t; ++i)
	{
		for(int j = 0; j < N-1;)
			if(s[j] == 'B' && s[j+1] == 'G')
			{
				s[j] = 'G';
				s[j+1] = 'B';
				j = j+2;
			}
			else ++j;
	}
	cout << s << endl;
}
