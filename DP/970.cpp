// #include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <map>
#include <set>

#define N 100010
#define ff first
#define ss second
#define pb push_back
#define ll long long
#define INF 1000000007
#define pii pair <int, int>
#define all(x) x.begin(),x.end()

using namespace std;

int n, mx, x, y, bir, nol, b;
int arr[N];

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> arr[i]; 
		if(arr[i] == 1) b++;
	}
	for(int i = 1; i <= n; i++)
	{
		nol = 0, bir = 0;
		for(int j = i; j <= n; j++)
		{
			if(arr[j] == 0)
				nol++;
			else
				bir++;
			if(nol - bir >= mx)
				mx = nol-bir, x = i, y = j;
		}
	}
	if(n == 1 and arr[1] == 1)
		return cout << 0, 0;
	if(n == b)
		return cout << n-1, 0;
		 
	for(int i = x; i <= y; i++)
	{
		if(arr[i] == 0)
			arr[i] = 1;
		else
			arr[i] = 0;
	}
	int ans = 0;
	
	for(int i = 1; i <= n; i++)
		if(arr[i] == 1)
			ans ++;
	
		cout << ans;
}