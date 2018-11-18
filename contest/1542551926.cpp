#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string pass, outp = ""; cin >> pass;
	int n, f1 = 0, f2 = 0, temp = 0; cin >> n;
	vector <string> sv(n);
	for(int i = 0; i < n; i++){
		cin >> sv[i];
		if(sv[i] == pass){
			cout << "YES";
			return 0;
		}
	}
	for(int i = 0; i < n; i++){
		if(sv[i][1] == pass[0] || sv[i][0] == pass[1]){
			outp += sv[i];
		}
	}
	if(outp.length()==0){
		cout << "NO";
		 return 0;
	} 
	if(pass[0] != pass[1]){
	for(int i = 0; i < outp.length(); i++){
		if(outp[i] == pass[1]){
		  f1++;
		}
		if(outp[i] == pass[0]){
		  f2++;
		}
	}
	(f1 >= 1 && f2 >= 1)? cout << "YES": cout << "NO";
	return 0;
	}else{
	  for(int i = 0; i < outp.length(); i++){
	    if(outp[i] == pass[0]){
	      if((i+1)%2 != temp%2 || temp == 0){
	        f1++;
	      }
	      temp = i+1;
	    }
	  }
	  f1 == 2? cout << "YES": cout << "NO";
	}
}