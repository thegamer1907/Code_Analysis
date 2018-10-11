#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	long long arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	int min = 1000000001, min_index = -1;
	
	for (int i=0;i<n;i++){
		
		int temp = (arr[i] - i - 1);
		if (temp < 0) temp = 0;
		else{
			temp = temp/n + 1;
		}

		if (temp < min){
			min = temp;
			min_index = i;
		}
	}
	
	cout <<min_index + 1<<endl;

}