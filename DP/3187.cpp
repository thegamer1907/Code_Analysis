#include "bits\stdc++.h"

#define fore(i,r,t) for(int i = (int)r; i < (int)t; i++)

using namespace std;

typedef long long ll;
typedef pair<char, int> pr;

int n;
int* arr;
int otv = 1;
int temp = 1;

inline void read()
{
	cin >> n;
	arr = new int[n];
	fore(i, 0, n)
	{
		cin >> arr[i];
	}
}

inline void solve()
{
	fore(i, 0, n-1)
	{
		if (arr[i + 1] <= arr[i] * 2)
			otv++;
		else
		{
			temp = max(temp, otv);
			otv = 1;
		}
	}
	cout << max(temp,otv);
}

int main()
{
	read();
	solve();
}