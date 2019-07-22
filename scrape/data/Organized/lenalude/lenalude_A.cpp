#include <cstdio>
#include <algorithm>
#include<iostream>
using namespace std;
long long int a[1111000],k1,m,n,l,k,j,ans,r;
int main() {
	cin>>n>>m>>k;
	for(int x=1; x<=m; x++) {
		cin>>a[x];
	}
	sort(a+1,a+m+1);
	r=m;
	l=1;
	j=0;
	k1=k;
	while(l<=r) {
		long long int b=0,jcz;
		while(a[l]-j<=k) {
			b++;
			l++;
		}
		if(b==0) {
			if(a[l]-j-k>k1) {
				jcz=a[l]-j;
				jcz-=(jcz%k1);
				k=jcz;
			} else
				k+=k1;
		} else {
			j+=b;
			ans++;
		}
	}
	cout<<ans<<endl;
}