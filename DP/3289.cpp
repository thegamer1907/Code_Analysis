#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long l,r;
	cin >> l >> r;
	if(l==r)
	{
		cout << 0 << endl;
		return 0;
	}
	for(int i=62;i>=0;i--)
	{
		if(((l>>i)&1)^((r>>i)&1))
		{
			cout << (1LL<<(i+1))-1 << endl;
			return 0;
		}
	}
}