#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long n, m, k;
	
	cin >> n >> m >> k;
	
	vector<long long> a(m);
	
	for(int i = 0; i < m; i++)
		cin >> a[i];

	
	long long i = 0, p= 0, ans = 0, f=0;
	
	while (i < m)
	{
		ans++;
	//	cout << p << '\n';
	//	cout << a[i] << ' ' << p << ' ' << k << '\n';
		long long num = (a[i]-p)/k;
		num += bool((a[i]-p)%k);
	//	cout << p << '\n';
	//	cout << num << '\n';
		int kol = upper_bound(a.begin(), a.end(), k*(num)+p)-upper_bound(a.begin(), a.end(),f);
		
	//	cout << (k*num)+p << ' ' << kol << ' ' << f << '\n';
	//	cout << kol << '\n';
		p+= kol;
		f = a[i+kol-1]; 
		i+= kol;
	}
	
	cout << ans;
	
}