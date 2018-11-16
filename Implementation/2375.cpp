#include <bits/stdc++.h>
using namespace std;

int arr[100005];

int main()
{
	int n,i,k,sm=0,t=0;
	cin >> n >> k;
	for(i=1;i<=n;i++)
	{
		if(sm+i*5<=240-k)
			t++,sm+=i*5;
		else
			break;
	}
	cout << t;
	return 0;
}