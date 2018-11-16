#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a=0,b=0,c=0;
	int arr[n][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
		a+=arr[i][0];
		b+=arr[i][1];
		c+=arr[i][2];
	}
	if(a==0&b==0&c==0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}