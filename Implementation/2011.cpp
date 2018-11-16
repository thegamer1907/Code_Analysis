#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int N;
	cin >> N;
	long long int arr[N][3];
	for(long long int i=0;i<N;i++){
		for(long long int j=0;j<3;j++){
			cin >> arr[i][j];
		}
	}
	long long int flag = 0;
	for(long long int j=0;j<3;j++){
		long long int sum = 0;
		for(long long int i=0;i<N;i++){
			sum+=arr[i][j];
		}
		if(sum!=0){
			cout << "NO" << endl;
			flag=1;
			break;
		}
	}
	if(flag == 0){
		cout << "YES" << endl;
	}
	return 0;
}