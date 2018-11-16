#include<iostream>

using namespace std ;

string s; 
int ans=1 ;

int main (){
	cin >> s ;
	for(int i=1 ; i<s.size() ; i++){
		if(s[i-1]==s[i]){
			ans++ ;
		}else{
			ans=1 ;
		}
		if(ans>=7){
			break ;
		}
	}
	if(ans>=7){
		cout << "YES" ;
	}else{
		cout << "NO" ;
	}
	return 0 ;
}
