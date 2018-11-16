#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n ;
	cin >> n ;
	int m ;
	cin >> m ;
	int i , j ;
	set<int>s;
	int dp[n];
	int arr[n];
	int a ;
	for(i = 0 ; i < n ; i++)
	{
		cin >> a ;
		arr[i] = a ;

	}

	for(i = n-1 ; i > -1 ; i--)
	{
		a = arr[i];
		s.insert(a);
		dp[i] = s.size();
	}

	int result[m];

	for(i = 0 ; i < m ; i++)
	{
		cin >> a ;
		result[i] = dp[a-1];
	}

	for(i = 0 ; i < m ; i++)
	{
		cout << result[i] << endl;
	}



	
}