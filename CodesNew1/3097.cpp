#include <bits/stdc++.h>
using namespace std;

const int N=3e5+5;
int a[N];

int main() {
	ios::sync_with_stdio(0);

	int n,k; cin >> n >> k;
	for(int i=0; i<n; i++)
		cin >> a[i];

	int i,j,I=-1,J=-1,mx=0;
	i=0; j=0; int c=0;
	while(j<n) {
		while(j<n && c<k) {
			if(a[j]==0) c++;
			j++;
		}
		while(j<n && a[j]==1)
			j++;
		
		// cout << i << " " << j << endl;
		if(j-i>mx) {
			mx = j-i; I=i; J=j;
		}
		while(i<n && c>=k) {
			if(a[i]==0) c--;
			i++;
		}
	}
	
	cout << mx << "\n";
	for(int i=0; i<n; i++) 
		if(i>=I && i<J) cout << "1 ";
		else cout << a[i] << " ";
}