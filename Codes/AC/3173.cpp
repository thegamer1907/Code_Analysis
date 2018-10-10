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

using namespace std;

#define fi first
#define se second
#define long long long
typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int arr[100003];

int main()
{
	//ios_base::sync_with_stdio(); cin.tie(0); cout.tie(0);
	// freopen("input.in", "r", stdin);
	int n; scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] -= i;
	}
	int mx = 1e9, ans = 0;
	for(int i = 0; i < n; i++)
	{
		if((arr[i]+n-1)/n < mx)
		{
			mx = (arr[i]+n-1)/n;
			ans = i+1;
		}
	}
	printf("%d\n", ans);
}










