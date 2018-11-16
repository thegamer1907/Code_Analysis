#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n,t ;
	cin >> n >> t ;

	string s ;
	cin >> s ;
	int i = 0 ;
	int cnt = 0 ;
	
	while(cnt<t){
		i = 0 ;
		while(s[i]){
			if(s[i] == 'B' && s[i+1] == 'G'){
				s[i] = 'G' ;
				s[i+1] = 'B' ;
				i++ ;
			}
			i++ ;
		}
		// cout << s << endl ;
		cnt++ ;
	}

	cout << s << endl ;
}
