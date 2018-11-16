#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	int ans = 0; int a = 0;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(arr[i] == 1) ans++;
		else a++;
	}
	if(ans == 0) { cout << n; return 0; }
	if(a == 0) { cout << n-1; return 0; }
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			int num = 0;
			for(int k = i; k <= j; k++)
				if(arr[k] == 0) num++;
			for(int k = 0; k < i; k++)
				if(arr[k] == 1) num++;
			for(int k = j+1; k < n; k++)
				if(arr[k] == 1) num++;
			if(num > ans) ans = num;
		}
	}
	cout << ans;
	return 0;
}