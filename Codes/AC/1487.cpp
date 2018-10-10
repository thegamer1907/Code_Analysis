#include <bits/stdc++.h>
using namespace std;

int n,s,a[100010],b[100010], l=0, r=n;

bool fea(int x) {
	for (int i=0;i<n;++i) {
		b[i] = a[i] + (i+1)*x;
	}
	sort(b, b+n);
	long long sum = 0;
	for (int i=0;i<x;++i) sum += b[i];
	return (sum<=s);
}

int main()
{
	cin >> n >> s;
	for (int i=0;i<n;++i) cin >> a[i];
	while (l<=r) {
		int mid = (l+r)>>1;
		if (fea(mid)) l=mid+1;
		else r=mid-1;
	}
	while (r<=n && fea(r)) ++r;
	l = r-1;
	cout << l << ' ';
	for (int i=0;i<n;++i) {
		b[i] = a[i] + (i+1)*l;
	}
	sort(b, b+n);
	long long sum = 0;
	for (int i=0;i<l;++i) sum += b[i];
	cout << sum << endl;
	return 0;
}