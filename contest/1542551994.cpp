#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, tmp;
	bool beg=false, end=false;
	int n;

	cin >> s >> n;

	while(n--)
	{
		cin >> tmp;
		if(tmp == s)
		{
			cout << "YES" << endl;
			return 0;
		}
		if(tmp[0] == s[1])
			end = true;
		if(tmp[1] == s[0])
			beg = true;
	}

	cout << ( (beg && end)?"YES":"NO") << endl;

}

	
