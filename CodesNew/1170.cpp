#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
int n;
int arr[N];

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++) cin >> arr[i];
	int x = -1, nx = -1;
	for(int i = 0; i < n; i++)
	{
		int turn = ((arr[i]-i)/n + ((arr[i]-i)%n > 0))*n;
		//cout << i << " " << i+turn << endl;
		if(nx == -1 || nx > i+turn) x = i, nx = i+turn;
	}
	cout << x+1 << endl;
} 