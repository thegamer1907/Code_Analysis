#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
typedef long long ll;
int main(){
	int n, t;
	cin >> n >> t;
	vector<int> a(n);
	for(int i = 1; i < n; i++){
		cin >> a[i];
	}
	int now = 1;
	do{
		if(now == t){
			cout << "YES";
			return 0;
		}
		now = a[now] + now;
		if(now == t){
			cout << "YES";
			return 0;
		}
	}while(now != n);
	cout << "NO";
	return 0;
}