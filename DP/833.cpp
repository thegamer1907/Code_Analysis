#include <iostream>
using namespace std;

int main(){
	int n, res = -1, c, o = 0;
	cin>>n;
	bool a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
		if(a[i]){
			o++;
		}
	}
	if(n == 1){
		cout<<1 - a[0];
		return 0;
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j <= n; j++){
			c = o;
			for(int k = i; k < j; k++){
				if(a[k]){
					c--;
					continue;
				}
				c++;
			}
			if(c > res){
				res = c;
			}
		}
	}
	cout<<res;
	return 0;
}
