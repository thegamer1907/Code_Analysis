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

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("input.in", "r", stdin);

	long n, k;
	scanf("%lld %lld", &n, &k);

	k = k&(-k);
	int res = 1;
	while(k/=2LL) res++;
	printf("%d\n", res);
}










