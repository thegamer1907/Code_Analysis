#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, k, max=0;
	
	cin >> n >> k;
	
	int a[n];
	
	for(int i=0; i<n; i++)
		{
			cin >> a[i];
			if(i+1==k)max=a[i];
		}
	int cont = 0;
	for(int i=0; i<n; i++)
		{
			if(a[i]>=max && a[i]>0)cont++;
		}
	cout << cont << endl;
	return 0;
}