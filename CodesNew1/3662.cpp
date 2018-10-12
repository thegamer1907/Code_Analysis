#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define IF(x, y, a, b) (x % y == 0 ? a : b)
int main(){
	int i, j, k, n, m, ans=0;	cin >> n >> m;
	int arr[n];
	for(i = 0; i < n; i++)	cin >> arr[i];
	sort(arr, arr+n);
	k = arr[n-1];
	for(i = 0; i < n; i++)	ans += k - arr[i];
	printf("%d", ans >= m ? k : k+(int)ceil(((m-ans)/(double)n)));
	printf(" %d", k+m);
	return 0;
}