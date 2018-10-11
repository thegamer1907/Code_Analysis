#include <stdio.h>
#include <conio.h>
#include <bitset>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <string.h>
#include <string>
#include <iostream>
#include <stack>
#include <ctype.h>
#include <algorithm>
#include <deque>
#include <functional>
#include <math.h>
#include <stdlib.h>

#define ll long long
#define pii pair<int,int>
#define mp make_pair
#define pll pair<ll,ll>

using namespace std;

const int N = 1e5 + 5;
int n, t;
int arr[N], csa[N];

bool ok(int st, int x)
{
	if ( csa[x] - csa[st - 1] > t ) return 0;
	return 1;
}
int main()
{
	scanf("%d%d", &n, &t);
	scanf("%d", &arr[1]);
	csa[1] = arr[1];
	for ( int i = 2 ; i <= n ; i++ )
	{
		scanf("%d", arr + i );
		csa[i] = arr[i] + csa[i - 1];
	}
	if ( n == 1 )
		arr[1] <= t ? printf("1\n") : printf("0\n");
	else
	{
		int books = 0;
		for ( int i = 1 ; i <= n ; i++ )
		{
			int st = i, en = n;
			int mid;
			while ( st < en )
			{
				mid = (st + en + 1) / 2;
				if ( !ok(i,mid) ) en = mid - 1;
				else st = mid;
			}
			books = max(books, st - i + 1);
		}
		if ( books == 1 )
		{
			for ( int i = 1 ; i <= n ; i++ )
				if ( arr[i] <= t ) 
				{
					printf("%d\n", books);
					return 0;
				}
			printf("0\n");
		}
		else printf("%d\n", books);
	}
	return 0;
}