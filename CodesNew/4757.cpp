#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
#define rev(a,n) for(int i = a; i < n; i++)
#define pb push_back(a);
int main() {
	int n,ans=0;cin>>n;int a[n];
	rev(0,n) cin >> a[i];
	sort(a,a+n);
	for(int i=0,j=n/2;i<n/2&&j<n;j++) if(2*a[i]<=a[j]) ans++,i++;
	cout << n-ans;
}