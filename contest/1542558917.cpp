#include <iostream>
using namespace std;

int main(){
	char pass[2];
	short n;

	cin>>pass>>n;

	char words[n][2];
	for (short i=0;i<n;i++){
		cin>>words[i];
	}
	for (short i=0;i<n;i++){
		if (pass[0]==words[i][0]&&pass[1]==words[i][1]){
			cout<<"YES";
			return 0;
		}
		if (pass[0]==words[i][1]){
			for (short j=0;j<n;j++){
				if (pass[1]==words[j][0]){
					cout<<"YES";
					return 0;
				}
			}
		}
	}
	cout<<"NO";

	return 0;
}
