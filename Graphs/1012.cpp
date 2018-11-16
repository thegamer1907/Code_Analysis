#include <iostream>

using namespace std;

int main(){
	int n, t;
	cin>>n>>t;
	int a[n];
	for(int i=1; i<n; i++) cin>>a[i];
	int curr = 1;
	while(curr<=t){
		if(curr==t){
			cout<<"YES";
			return 0;
		}
		curr = curr + a[curr];
	}
	cout<<"NO";
	return 0;
}
