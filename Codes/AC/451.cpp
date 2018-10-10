#include <iostream>
using namespace std;
int main ()
{
	long long k;
	cin >>k;
	int t=0;
	for (int i=19;;i++)
	{
		int x=i,s=0;
		while (x!=0)
		{
			s+=x%10;
			x=x/10;
		}
		if (s==10)	t++;
		if (t==k)
		{
			cout <<i;
			return 0;
		}
	}
	return 0;
}
