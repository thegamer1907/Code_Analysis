#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a[101],arr[101],temp,sum=0; cin>>n;
	
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++){
		temp=arr[i];
		if(temp==1) a[i]=-1;
		else a[i]=1;
	}
	// for(int i=0;i<n;i++) cout<<a[i]<<" ";
	int I=0,J=0;
	//kadane's Algo
	int max_end_here=0,max_so_far=0;
	for(int i=0;i<n;i++){
		max_end_here=max_end_here+a[i];
		if(max_end_here<0){
			 max_end_here=0;
		}
		else if(max_end_here>=max_so_far) {
			J=i;
			max_so_far=max_end_here;
		}
	}
	int S=0;
	for(int i=J;i>=0;i--){
		S+=a[i];
		if(S==max_so_far) I=i;
	}
	// cout<<I<<" "<<J<<" "<<max_so_far<<endl;
	
	for(int i=I;i<=J;i++) sum+=(1-arr[i]);
	for(int i=0;i<I;i++) sum+=arr[i];
	for(int i=J+1;i<n;i++) sum+=arr[i];
	
	cout<<sum;
	return 0;
}