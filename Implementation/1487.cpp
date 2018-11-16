#include <bits/stdc++.h>
using namespace std;
int main(){
	//freopen("a.txt","r",stdin);
	string cad;
	while(cin>>cad){
		bool sw = false;
		int c = 1;
		for(int i = 1 ; i < cad.size() ; i++){
			if(cad[i] == cad[i-1]){
				c++;
			}
			else{
				c = 1;
			}
			if(c >=7){
				sw = true;
			}
		}
		if(!sw){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}
	}
	return 0;
//282A	14:01 - 14:15
//96A 	14:15
//112A
//339A
//281A
//266A
//263A
//158B
//116A
//58A
// inicio : 14:01
}
