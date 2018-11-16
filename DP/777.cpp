#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n]={},b[n]={},ans=0;
	for (int i=0;i<n;i++){
		cin >> a[i];
		ans=ans+a[i];
		if (a[i]==0){
			b[i]=1;
		}else{
			b[i]=-1;
		}
	}
	int sum=0,max=-1e9;
	for (int i=0;i<n;i++){
		if (sum>=0){
			sum+=b[i];
		}else{
			sum=b[i];
		}
		if (sum > max){
			max=sum;
		}
	}
	cout << ans+max;
	return 0;
}