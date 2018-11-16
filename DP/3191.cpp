#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int count=1;
	int  temp=1;
	for(int i=0;i<n-1;i++){
		if(a[i]*2>=a[i+1]){
			temp++;
			if(temp>count) count=temp;
		}
		else{
			temp=1;
		}
	}
	cout<<count;
	return 0;
}