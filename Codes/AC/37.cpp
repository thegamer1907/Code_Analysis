#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
  IO;
	int n, l; cin >> n >> l;
	vector <int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	
	sort(a.begin(), a.end());
		
	int maxdist = max(a[0], l - a[n - 1]) * 2;
	for (int i = 0; i < n - 1; ++i)
		maxdist = max(maxdist, a[i + 1] - a[i]);
	
	printf("%.10f\n", (double)maxdist / 2);	 
 
  return 0;
}
