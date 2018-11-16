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
int pref[100003];
char pet[100003];

int sum(int a, int b)
{
	return pref[b]-pref[a-1];
}

bool cek(int x)
{
	for(int i = 1; i+x-1 <= n; i++)
	{
		if(sum(i,i+x-1) <= k || x-sum(i,i+x-1) <= k)
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
		pref[i] = pref[i-1] + (pet[i] == 'a');
	}

	int kir = 1, kan = n;
	while(kir < kan)
	{
		int mid = (1+kir+kan)/2;
		if(cek(mid)) kir = mid;
		else kan = mid-1;
	}
	cout << kir << "\n";
}










