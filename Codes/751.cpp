#include<bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; ;i++){
		int j = i;
		int cnt = 0;
		while(j){
			cnt+=j%10;
			j/=10;
		}
		if (cnt==10)sum++;
		if (sum == n){
			cout << i <<endl;
			break;
		}
	}
	return 0;
} 