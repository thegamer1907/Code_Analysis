#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int count1(0),count0(0),countmax0(-1);
	
	while(n--){
		
		int x;
		cin>>x;
		
		if(x==1){
			
			count1++;
			if(count0>0){
				count0--;
			}
			
		}
		else{
			
			count0++;
			if(countmax0<count0){
				countmax0=count0;
			}
			
		}
		
	}
	
	cout<<count1+countmax0;
	
	return 0;
}