#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 100010;
long long a[maxn];
long long b[maxn] = {0};
int main(){
	long long n;
	cin >> n;
	for(long long i = 0;i<n;i++){
		cin >> a[i];
	}
	if(n == 1&&a[0] == 0){
		cout << "cslnb" << endl;
		return 0;
	}
	sort(a,a+n);
	long long ans = 0;
	for(long long i = 1;i<n;i++){
		if(a[i] == a[i-1]) {
			ans++;
			if(a[i] == 0){
				cout << "cslnb" << endl;
		        return 0;
			}
		}
		if(ans>1) {
			cout << "cslnb" << endl;
		    return 0;
		}
	}
	long long t = 0;
	long long j = 0;
	while(++t){
		while(j<n&&a[j] == 0){
			 j++;
		}
		if(j == n){
			break;
		}
		a[j]--;
	}
	if(t%2 == 1){
		cout << "sjfnb" << endl;
	}
	else {
		cout << "cslnb" << endl;
	}
	return 0;
}