#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	scanf("%lld", &n);
	int pos=0;
	long long mini=(long long)1e18;
	for(int a=1;a<=n;a++)
	{
		long long inp;
		scanf("%lld", &inp);
		long long tm=(inp/n + ((inp%n)>=a))*n;
		if(mini > tm)
		{
			mini=tm;
			pos=a;
		}
	}
	printf("%d\n", pos);
	return 0;
}
