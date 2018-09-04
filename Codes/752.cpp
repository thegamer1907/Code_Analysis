#include<iostream>
using namespace std;
bool sum10(int a){
	int sum=0;
	while(a){
		sum+=a%10;
		a/=10;
	}
	return sum==10;
}
int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int k;
	cin>>k;
	int start=19;
	for(int i=19;k;i++){
		if(sum10(i)){
			k--;
			if(k==0){
				cout<<i<<"\n";
				return 0;
			}
		}
	}
	return 0;
}
