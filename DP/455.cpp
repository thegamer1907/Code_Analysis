#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++) cin >> a[i];
	int m;
	cin >> m;
	int b[m];
	for (int i=0;i<m;i++) cin >> b[i];
	sort(a,a+n); sort(b,b+m);
	int aptr=0, bptr = aptr, cnt = bptr;
	while (aptr < n && bptr < m){
		if (abs(a[aptr]-b[bptr]) <= 1){
			aptr++;
			bptr++;
			cnt++;
		} else {
			if (a[aptr] > b[bptr]) bptr++;
			else aptr++;
		}
	}
	cout << cnt << endl;
}