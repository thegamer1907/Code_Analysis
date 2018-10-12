#include <iostream>
#include <algorithm>
using namespace std;
const int N=100005;
int n,k,a[N],l=0,r=0,sum,ans=0;

int main() {
	
	cin >>n>>k;
	for(int i=0;i<n;i++){
		cin >>a[i];
	}
	sum =a[0];
	while (l<n &&r<n){
		if (l>r){
			r++;
			sum +=a[r];
			continue;
		}
		if (sum >k){
			sum-=a[l];
			l++;
		}
		else{
			ans=max(ans,r-l+1);
			r++;
			if (r!=n){
				sum +=a[r];
			}
		}
	}
	cout <<ans<<endl;
	return 0;
}