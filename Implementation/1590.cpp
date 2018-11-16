#include <iostream>
#include <string>

using namespace std;

int main(){
	string game;
	cin >> game;
	int temp=0;
	for(int i=0;i<game.length();i++){
		if(game[i]=='0'){
				temp=0;
			}
		if(game[i]=='1'){
			temp++;
			if(temp>=7){
				cout << "YES";
				return 0;
			}
		//cout << temp << endl;
		}
	}
	temp=0;
	for(int i=0;i<game.length();i++){
		if(game[i]=='1'){
				temp=0;
			}
		if(game[i]=='0'){
			temp++;
			if(temp>=7){
				cout << "YES";
				return 0;
			}
		//cout << temp << endl;
		}
	}
	cout << "NO";
}