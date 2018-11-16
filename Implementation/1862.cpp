#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int x[1000];
	int y[1000];
	int z[1000];
	cin >> n;
	for(int i=0 ; i < n ;i++){
		cin >> x[i] >> y[i] >> z[i];
	}
	int a=0;
	int b=0;
	int c=0;
	for(int i=0 ; i < n ;i++){
		a = a + x[i];
		b = b + y[i];
		c = c + z[i];
	}
	if(a == 0 and b == 0 and c == 0){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
