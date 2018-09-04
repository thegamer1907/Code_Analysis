#include<iostream>
#include<algorithm>
using namespace std;
int arr[100005];
int n;
int t;
int main(){
	cin>>n;
	arr[0]=0;
	for(int i=1;i<=n;i++){
		cin>>t;
		arr[i]=arr[i-1]+t;
	}
	int m;
	int * ptr;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>t;
		ptr=lower_bound(arr+1,arr+1+n,t);
		cout<<ptr-arr<<endl;
	}
	return 0;
}
