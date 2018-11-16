#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, Ted;
	cin >> n;
	int x = 0, y = 0, z = 0;
	for(int i = 0; i < n; i++){
		cin >> Ted;
		x += Ted;
		cin >> Ted;
		y += Ted;
		cin >> Ted;
		z += Ted;
	}
	if(z == 0 and x == 0 and y == 0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
