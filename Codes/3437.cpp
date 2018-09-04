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

bool cek(long n, long k)
{
	long hit = 0;
	long tar = (n+1)/2;
	while(n)
	{
		if(n < k)
		{
			hit += n;
			n = 0;
		}
		else
		{
			hit += k;
			n -= k;
			n -= n/10;
		}
	}
	return hit >= tar;
}

int main()
{
	//ios_base::sync_with_stdio(); cin.tie(0); cout.tie(0);
	// freopen("input.in", "r", stdin);
	long n;
	scanf("%lld", &n);
	long kir = 1, kan = 1e18;
	while(kir < kan)
	{
		long mid = (kir+kan)/2;
		if(!cek(n,mid))	kir = mid+1;
		else kan = mid;
	}
	printf("%lld\n", kir);
}










