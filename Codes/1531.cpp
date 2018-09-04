// KEEP IT SIMPLE //
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MAX 100
const int inf = 9e18;
const double pi = acos(-1.0);
const int M = 1e9 + 7;
const int N = 1e5 + 5;
int ar[100005], n, s;
int init(int k)
{
	int sum(0);
	vector<int> v;
	for(int i = 0; i < n; i++)
	{
		v.push_back(ar[i] + (i + 1) * k);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < k; i++)
	{
		sum += v[i];
	}
	return sum;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> s;
    for(int i = 0; i < n; i++)
    {
    	cin >> ar[i];
    }
    int l(0), r(n);
    while(l < r)
    {
    	int mid = (l + r + 1) / 2;
    	int t = init(mid);
    	if(t > s) r = mid - 1;
    	else l = mid; 
    }
    cout << l << " " << init(l);
}