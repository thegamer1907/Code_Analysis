#include <iostream>

using namespace std;

void trans (char s[51] , int n){
	for(int i = 0 ; i < n - 1 ; i++)
		if(s[i] == 'B' && s[i+1] == 'G'){
			s[i] = 'G';
			s[i+1] = 'B';
			i++;
			}
			
	
	}


int main () {
	int n , t;
	cin >> n >> t;
	
	char s [51];
	cin >> s;
	
	for(int i = 1 ; i <= t ;i++)
	trans(s,n);
	
	
	cout << s;
		
	}
