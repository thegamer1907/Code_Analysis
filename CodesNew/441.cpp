#include <iostream>
#include <algorithm>
using namespace std;
const int N=100005;
int n,k,a[N],l=1,r=1,sum,ans=-1;

int main() {
	
	cin >>n>>k;
	for(int i=1;i<=n;i++){
		cin >>a[i];
	}
	sum =a[1];
	while (l<=n &&r<=n){
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
			ans=max(ans,r-l);
			r++;
			if (r!=n+1){
				sum +=a[r];
			}
		}
	}
	cout <<ans+1<<endl;
	return 0;
}