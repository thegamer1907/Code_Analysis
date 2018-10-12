#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int m, n;
	cin >> n >> m;
	vector<int> l(n);
	for(int i=0; i<n; i++)
		cin >> l[i];
	sort(l.begin(), l.end());
	int mx=l[l.size()-1];
	int ans1, ans2=mx+m;
	for(int i=0; i<n; i++) 
		if(m < mx-l[i]) {
			m=0;
			break;
		}
		else {
			m=m-(mx-l[i]);
			l[i]=mx;
		}
	if(m==0)
		ans1=mx;
	else if(m%n==0)
		ans1=mx+(m/n);
	else 
		ans1=mx+(m/n)+1;
	cout << ans1 << " " << ans2;
	return 0;
}
