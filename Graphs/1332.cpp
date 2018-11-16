#include<bits/stdc++.h>
using namespace std;
long long n, t, Ted, Pablo;
int main(){
	cin >> n >> t;
	for(int i = 1; i < n and Pablo <= t; i++){
		cin >> Ted;
		if(i == 1){
			Pablo += 1 + Ted;
		}else if(i != Pablo){
		}else if(i != 1){
		Pablo += Ted;
		}
	}
	Pablo -= Ted;
	if(n == t){
		cout << "YES" << endl;
	}else if(Pablo == t){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

