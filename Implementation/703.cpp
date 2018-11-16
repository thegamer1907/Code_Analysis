#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int data[100];
	for(int i=0;i<n;i++){
		cin>>data[i];
	}
	int val = data[k-1];
	int cnt = 0;
	for(int i=0;i<n;i++){
		if(data[i] > 0 && data[i] >= val){
			cnt++;
		}
	}
	
	cout<<cnt;
	
	return 0;
}
