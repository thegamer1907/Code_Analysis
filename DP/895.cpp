#include<bits/stdc++.h>

using namespace std;


int main(){

	int n;
	cin>>n;
	int arr[n];
	int count=0;
	for(int i=0;i<n;i++){

		cin >> arr[i];
	}

	for(int i=0;i<n;i++ ){

		if(arr[i]==0){

			arr[i]=1;
		}
		else{

			arr[i]=-1;
			count++;
		}
	}


	int currentsum=0, sumtillhere=INT_MIN;

	for(int i=0;i<n;i++){

		currentsum=currentsum+arr[i];

		if(sumtillhere<currentsum){

			sumtillhere=currentsum;
		}

		if(currentsum<0){
			currentsum=0;
		}

	}

	cout << sumtillhere+count << endl;

}


