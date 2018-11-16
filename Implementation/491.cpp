#include <bits/stdc++.h>
using namespace std;
int n,k,x, counter = 0;
vector<int> num;
int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> x;
		num.push_back(x);
	}
	for(int i = 0; i < n;++i){
		if(num[i] >= num[k-1] && num[i] > 0)
			counter++;
	}
	cout << counter << endl;
	return 0;
}