#include<bits/stdc++.h>
#define MAX 101
using namespace std;


int main(){
	int n, k, i, temp, kp=0;
	int h[MAX] = {0};
	cin>>n>>k;
	for(i=0;i<n;i++){
		cin>>temp;
		h[temp]++;
	}
	
	for(i=100;i>0;i--){
		kp+=h[i];
		if(kp >= k){
			break;
		}
	}
	cout<<kp;
	return 0;
}
