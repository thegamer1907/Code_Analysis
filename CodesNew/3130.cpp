#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <stack>
#include <queue>
#include <set>
#include <list>
#include <bitset>
#include <array>

using namespace std;

#define fi first	
#define se second
#define long long long
typedef pair<int,int> ii;

int n, k;
int pref[300003];
char pet[300003];

int sum(int a, int b)
{
	return pref[b]-pref[a-1];
}

bool cek(int x)
{
	for(int i = 1; i+x-1 <= n; i++)
	{
		if(sum(i,i+x-1) <= k)
			return 1;
	}
	return 0;
}

int main()
{
	// ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("input.in", "r", stdin);

	cin >> n >> k;
	for(int i = 1; i <= n; i++)
	{
		cin >> pet[i];
		pref[i] = pref[i-1] + (pet[i] == '0');
	}

	int kir = 0, kan = n;
	while(kir < kan)
	{
		int mid = (1+kir+kan)/2;
		if(cek(mid)) kir = mid;
		else kan = mid-1;
	}
	cout << kir << "\n";

	for(int i = 1; i+kir-1 <= n; i++)
	{
		if(sum(i,i+kir-1) <= k)
		{
			for(int j = i; j <= i+kir-1; j++)
				pet[j] = '1';

			for(int j = 1; j <= n; j++)
			{
				cout << pet[j];
				if(j < n) cout << " ";
			}
			cout << "\n";
			return 0;
		}
	}
}





