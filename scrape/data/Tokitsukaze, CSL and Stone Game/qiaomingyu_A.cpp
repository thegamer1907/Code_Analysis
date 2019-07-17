#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 100010;
long long a[maxn] = {-1};
int main(){
	long long n;
	cin >> n;
	for(long long i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	long long ans = 0;
	long long y = -1;
	for(long long i = 2;i <= n;i++){
		if(a[i] == a[i-1]) {
			ans++;
			if(ans == 1){
				y = i;
			}
		}
		if(ans>1) {
			cout << "cslnb" << endl;
		    return 0;
		}
	}
	if(y != -1&&a[y-1]-1 == a[y-2]){
		cout << "cslnb" << endl;
		return 0;
	}
	long long t = 0;
	if(y != -1){
		a[y-1]--;
        t = 1;
	}
	for(int i = 1;i <= n;i++){
		t += a[i]-(i-1);
	}
	//cout << ans << endl;
	if(t%2 == 1){
		cout << "sjfnb" << endl;
	}
	else {
		cout << "cslnb" << endl;
	}
	return 0;
}

//����ȡС