#include<bits/stdc++.h>
#define ll long long;
using namespace std;

const long double pi=2*acos(0.0);

int main()
{
	int n,k,ak,cnt=0;
	cin >> n >> k;
	int a[n];
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		if(i==k) ak=a[i];
	}
	for(int i=1;i<=n;i++) {
		if(a[i]>=ak and a[i]!=0) cnt++;
	}
	cout<<cnt;
	return 0;
}

