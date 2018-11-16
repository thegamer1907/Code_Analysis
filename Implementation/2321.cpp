#include <iostream>
using namespace std;
int main (){
	int n;
	int t=0;
	cin >> n;
	string s;
	cin >> s;
	int a[1000];
	for(int i=0 ;i < n ;i++){
		if(s[i] == 'R'){
			a[i] = 1;
		}
		if(s[i] == 'G'){
			a[i] = 2;
		}
		if(s[i] == 'B'){
			a[i] = 3;
		}
	}
	for(int i = 1 ;i < n ;i++){
		if(a[i] == a[i - 1]){
			t = t + 1; 
		}
	}
	cout << t;
	
	return 0;
}
