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
ii operator+ (ii a, ii b) { return {a.fi+b.fi,a.se+b.se}; }

long A[200003], B[200003], C[200003], D[200003];

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("input.in", "r", stdin);

	long n; int m, k;
	scanf("%lld %d %d", &n, &m, &k);

	long x, s;
	scanf("%lld %lld", &x, &s);

	for(int i = 1; i <= m; i++) scanf("%lld", &A[i]);
	for(int i = 1; i <= m; i++) scanf("%lld", &B[i]);
	for(int i = 1; i <= k; i++) scanf("%lld", &C[i]);
	for(int i = 1; i <= k; i++) scanf("%lld", &D[i]);


	long res = n*x;
	int kir = 0, kan = k;
	while(kir < kan)
	{
		int mid = (1+kir+kan)/2;
		if(D[mid] > s) kan = mid-1;
		else kir = mid;	
	}
	res = min((n-C[kir])*x, res);

	for(int i = 1; i <= m; i++)
	{
		if(B[i] > s) continue;
		else
		{
			kir = 0, kan = k;
			while(kir < kan)
			{
				int mid = (1+kir+kan)/2;
				if(D[mid] > s-B[i]) kan = mid-1;
				else kir = mid;
			}
			res = min((n-C[kir])*A[i], res);
		}
	}
	printf("%lld\n", res);
}










