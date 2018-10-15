#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
const int MAX_N = 1e5 + 10;
long long nums[MAX_N];
int main(){
	int n;
	cin>>n;
	long long sum =0;
	for (int i=0;i<n;i++){
		cin>>nums[i];
		sum+=nums[i];
	}
	sort(nums,nums+n);

	long long max = nums[n-1];
	
	long long x = sum/(n-1);
	if(sum%(n-1)) x++;
	
//	cout<<x<<endl;
	
	if(x<=max){
		cout<<max<<endl;
		
	}
	else {
		cout<<x<<endl;
		
	}
}
