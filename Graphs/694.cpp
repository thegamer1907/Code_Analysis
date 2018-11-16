#include<bits/stdc++.h>
using namespace std;
int main () {
	string a;
	int b  , c;
	cin>> b >> c >> a;
	while(c > 0){
	for(int i = 0; i < a.size() ; i++){
		if(a[i] == 'B' && a[i+1] == 'G'){
		swap(a[i] , a[i+1])	;
		i++;
		}
	}c--;
	}
	cout<<a;
	
}
