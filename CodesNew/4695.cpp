#include<iostream>
#include<algorithm>
using namespace std;
int n, a[1000005], l, r;
int main() 
{
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n);
	for (r=0; r<n; r++) if (a[r]>=2*a[l]) l++;
	cout<<n-min(n/2, l);
}