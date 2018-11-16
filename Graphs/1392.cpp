#include <iostream>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	int a[n];
	for(int i=1; i < n; ++i){
		cin >> a[i];
	}
	int location = 1;
	for(; location < t; location += a[location]);
	if(location == t){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
    return 0;
}