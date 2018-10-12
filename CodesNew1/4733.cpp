#include<iostream>
#include<algorithm>

using namespace std;
const int maxN=5e5+9;
int a[maxN];
int main(){
	long long n;
	cin>>n;
	long long j,i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	long long ans=n;
	sort(a,a+n);
	j=n/2;
	for(i=0;i<n/2;i++){
			while(a[j]<2*a[i]&&j<n){
				j++;
			}
			if(a[j]>=2*a[i]){
			ans--;
			j++;
		}
	}
	cout<<ans;
	return 0;
}