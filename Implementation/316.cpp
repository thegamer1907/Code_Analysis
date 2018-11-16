#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,i = 1;
	scanf("%d%d",&n,&k);
	int arr[1000];
	arr[k] = 0;
	int count = 0;
	for(;i <= n; i++){
		scanf("%d",&arr[i]);
		if(arr[i] == 0) 	break;
		
		
		if(arr[i] >= arr[k] )  count++;
		
	}
	cout<<count<<endl;	
	
	return 0;
}