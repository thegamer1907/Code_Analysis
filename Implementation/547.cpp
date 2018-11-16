#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, i;
	int score[50];
	cin >> n >> k;
	for(i = 0; i < n; i++){
		cin >> score[i];
	}
	for(i = k-1; i < n;){
		if(score[i] == 0){
			i--;
			continue;
		}
		if(k == n && score[k-1]){
			cout << k;
			return 0;
		}
		if(score[i+1] == score[i]){
			i++;
		}else if(score[i+1] != score[i]){
			break;
		}
	}
	if(k == 1){
		if(!score[0]){
			cout << "0";
			return 0;
		}
	}
	cout << i+1;
	return 0;
}