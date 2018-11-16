#include <iostream>
using namespace std;
int main(){
	int k;
	int n;
	int w;
	cin >> k >> n >> w;
	int t=0;
	for(int i=1 ; i <= w ; i ++){
		t = t + (i * k);
	}
	if(t - n <= 0){
		cout << 0;
		return 0;
	}
	cout << t - n;	
	
	
	
	
	return 0;
}
