#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	int x=0, y=0, z=0;
	
	for(int i=1;i<=n;i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		x+=a;
		y+=b;
		z+=c;
	}
	
	if(x==0 && y==0 && z==0){
		cout << "YES" << endl;
		return 0;
	}
	
	cout << "NO" << endl;
	
	return 0;
}
