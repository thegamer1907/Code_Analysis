#include <iostream>
using namespace std;


int main(){
	
	int n;
	cin>> n;
	int a[n][3];
	int x = 0, y = 0, z = 0;
	
	for(int i=0; i<n; i++){
		cin>> a[i][0] >> a[i][1] >> a[i][2];
		x+=a[i][0];  y+=a[i][1];  z+=a[i][2];
	}
	
	cout<< (x==0 && y==0 && z==0 ? "YES" : "NO");
	
}
