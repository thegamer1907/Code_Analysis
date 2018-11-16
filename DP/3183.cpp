#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	long a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int count = 0, tmp=0;
	for(int i=0;i<n-1;i++){
	    if(a[i]*2>=a[i+1]){
	        tmp++;
	        if(count<tmp)count=tmp;
	    }
	    else {
	        tmp=0;
	    }
	   // cout<<i<<" "<<tmp<<endl;
	}
	cout<<count+1<<endl;
	return 0;
}