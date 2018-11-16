#include <iostream>

using namespace std;

int main()
{
	int n, f = 0, s = 0, th = 0, temp;
	
	cin >> n;
	

	for(int i = 0; i < n; i++)
	{
		temp = f;
		cin >> f;
		f += temp;
		temp = s;
		cin >> s;
		s += temp;
		temp = th;
		cin >> th;
		th += temp;
	}
	if(f == 0 && s == 0 && th == 0)
	cout << "YES";
	else
	cout << "NO";
	return 0;
}
