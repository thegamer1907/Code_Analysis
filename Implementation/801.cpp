#include <bits/stdc++.h>

using namespace std;
	int n, t;
	
	string s;
	
int main(){
	cin>> n>> t;
	cin>> s;
	for(int i = 1; i <= t; i++){
		for(int j = 0; j < n; j++){
			if(s[j] == 'B' && s[j + 1] == 'G'){
				swap(s[j], s[j + 1]);
				j++;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout<< s[i];
	}
}