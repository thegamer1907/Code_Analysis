#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int n , k , vst[1 << 4];

bool check(int x , int y)
{
	for(int i = 0; i < k; i++)
		if( (x & (1 << i) ) && (y & (1 << i)))
			return false;
	return true;
}

int main()
{
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
	{
		int state = 0;
		bool have;
		for(int j = 1; j <= k; j++)
		{
			cin >> have;
			state = (state << 1) | have;
		}
		vst[state]++;
	}

	for(int i = 0; i < (1 << k); i++)
		for(int j = 0; j < (1 << k); j++)
			if(vst[i] && vst[j])
				if(check(i , j))
				{cout << "YES"; return 0;}
	cout << "NO";
	return 0;
}
