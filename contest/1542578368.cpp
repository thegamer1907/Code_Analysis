#include<bits/stdc++.h>

using namespace std;


int main(){
	int n, k;
	cin >> n >> k;
	int a[n] = {0};
	int flag = 0;	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			int x;
			cin >> x;
			a[i] = a[i]*2+x;
		}
		if(a[i] == 0){
			flag = 1;
		}
	}
	int found[16] = {0};
	for(int i = 0; i < n; i++){
		found[a[i]] = 1;
		for(int j = 0; j <= 15; j++){
			if(found[j] == 1){
				int temp = ((a[i])&j);
				if(temp == 0){
					flag = 1;
					break;
				}
			}
		}
	}
	if(flag == 1){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}