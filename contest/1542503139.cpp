#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	string a, y;
	int n,q=0,c=0,v=0;
	cin >> a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> y;
		
			if (y == a)
			{
				q++;
			}
			 if (a[0] == y[1])
			{
				c++;
			}
			 if (a[1] == y[0])
			{
				v++;
			}
		}
	
	if (q >= 1 ||( c >= 1 && v >= 1))
		cout << "YES";
	else 
		cout << "NO";
//	system("pause");
	return 0;
}