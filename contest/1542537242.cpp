//besme taala
//ya_hossein
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, d, e, s = 0;
	cin >> a >> b >> c >> d >> e;
	a = a%12, d %= 12, e %= 12;
	a *= 5, d *= 5, e *= 5;
	for(int i = d, s = 0; s <= 62; i++, s ++)
	{
		if(i == 60)
		i = 0;
		if(i == e)
		{
			cout << "yes";
			return 0;
		}
		if(i == a || i == b || i == c)
		break;
	}
	for(int i = d - 1, s = 0; s <= 62; i--, s++)
	{
		if(i < 0)
		i += 60;
		if(i == a || i == b || i == c)
		break;
		if(i == e)
		{
			cout << "yes";
			return 0;
		}
	}
	cout << "no";
}