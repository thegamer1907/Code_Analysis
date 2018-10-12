#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
	cin >> n;
	int k;
	cin >> k;
	int maxx = INT_MIN , sum = k;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		sum+=x;
		maxx = max(maxx,x);
	} 
	cout << max( (int)ceil((double)sum/n) , maxx) << " " << maxx+k << endl;
	return 0;
}
