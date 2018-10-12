#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> arr,brr;
	for(int i = 0; i < n;i++){
		int x;
		cin>>x;
		arr.push_back(x);
		brr.push_back(x);
	}
	sort(arr.begin(),arr.end());
	sort(brr.begin(),brr.end());
	int i = 0, j = (n/2);
    int m = n/2;
	if(n%2!= 0){
		j = j + 1;
		m =  m + 1;
	}
	while(i < m && j < n){
		if(2*arr[i] <= arr[j]){
		//	cout<<arr[i]<<" "<<arr[j]<<endl;
			i+=1;
			j+=1;
		}
		else{
			j+=1;
		}
	}
	cout<<(m-i)+(n/2)<<endl;
	return 0;
}