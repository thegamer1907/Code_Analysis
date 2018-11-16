
#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int count = 0;
	int req_score = arr[k-1];
	
	for(int i=0;i<n;i++){
		if(arr[i] > 0 && arr[i] >= req_score){
			count++;
		}
	}
	cout << count << endl;
	
}