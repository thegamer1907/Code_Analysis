#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][3], sum = 0;
	int x=0, y=0, z=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			x+=a[i][0];
			y+=a[i][1];
			z+=a[i][2];
		}
	}
	if(x==0 and y==0 and z==0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}