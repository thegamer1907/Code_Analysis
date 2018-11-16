#include <iostream>
using namespace std;
int main (){
	int n;
	int k;
	cin >> n >> k;
	string s;
	cin >> s;
	int a[10000];
	for(int i=0 ; i < n ; i++){
		if(s[i] == 'B'){
			a[i] = 1;
		}else{
			a[i] = 2;
		}
	}
	for(int j = 0; j < k ;j++){
		for(int i=0 ;i < n - 1; i++){
			if(a[i] == 1 and a[i + 1] == 2){
				a[i] = 2;
				a[i + 1] = 1;
				i = i + 1;
			}
		}
	}
	for(int i=0 ; i < n ;i++){
		if(a[i] == 1){
			cout << "B";
		}else{
			cout << "G";
		}
	}
	
	
	return 0;
}
