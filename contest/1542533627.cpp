#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,b[101];
	int c;
	
	cin>>a>>c;
	for(int i=0;i<c;i++){
		cin>>b[i];
	}
	
	for(int i=0;i<c;i++){
		if(b[i]==a){
			cout<<"YES";
		  return 0;
		}
		for(int j=0;j<c;j++){
			if(b[i][1]==a[0]){
				if(b[j][0]==a[1]){
					cout<<"YES";
				  return 0;
				}
			}
		}
	}
	cout<<"NO";
  return 0;
}