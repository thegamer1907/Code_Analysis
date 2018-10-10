#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
int n,m,a[100001],p[1000001];
queue <pair<int,int> >q;
int main()
{
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		a[i] += a[i-1];
		for(int j=a[i-1] + 1;j<=a[i];j++){
			p[j] = i;
		}
	}
	cin >> m;
	for(int i=1;i<=m;i++){
		int l;
		cin >> l;
		cout << p[l] << endl;
	}
}