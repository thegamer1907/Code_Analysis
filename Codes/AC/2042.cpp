#include <iostream>
#include <map>
typedef long long int ll;
using namespace std;
map<ll,ll>m1;
map<ll,ll>m2;
int main() {
	ll i,j,k,l,n,m=0;
	cin>>n>>k;
	for(i=0;i<n;i++) {
		cin>>j;
		if((j/k)*k==j) {
			m += m2[j/k];
			m2[j] += m1[j/k];
		}
		m1[j]++;
	}
	cout<<m<<endl;
	return 0;
}