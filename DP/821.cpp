#include <bits/stdc++.h>
using namespace std;
long long int n, a[110], sum, ans, sum1;
int main(){
	cin >> n;
	for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			ans = sum;
    	for(int k = i; k <= j; k++){
        	if(a[k]) ans--;
        	else ans++;
			}
		sum1 = max(sum1 , ans);
		}
	}
	cout << sum1;
	return 0;
}
