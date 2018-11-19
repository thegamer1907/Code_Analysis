#include<iostream>
#include<algorithm>
using namespace std;
bool x[16];
int  a[4];
int main (){
	
	
	int n ,z;
	cin >> n >> z;
	for(int i=0 ; i<n ; i++){
		int v=0;
		for(int i2=0 ; i2<z ; i2++)cin >> a[i2];
		for(int i2=0 ; i2<4 ; i2++){v=2*v+a[i2];}
		x[v]=true;
	}
	for(int i=0 ;i<16 ; i++){
		for(int i2=0 ; i2<16 ; i2++){
			if(i& i2||!x[i]||!x[i2])continue;
			return cout << "YES"  , 0;
		}
	}
	cout << "NO";
	return 0;
}