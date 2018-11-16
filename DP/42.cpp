#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arr1[n], i;
	for(i=0;i<n;i++){
		cin>>arr1[i];
	}
	
	int m;
	cin>>m;
	
	int arr2[m];
	for(i=0;i<m;i++){
		cin>>arr2[i];
	}
	
	sort(arr1, arr1+n);
	sort(arr2, arr2+m);
	
	int j, k=0, couple=0;
	for(i=0;i<n;i++){
		for(j=k;j<m;j++){
			if(abs(arr1[i]-arr2[j])<=1){
				couple++;
				k=j+1;
				break;
			}
		}
	}
	
	cout<<couple<<endl;
	
	return 0;
}
