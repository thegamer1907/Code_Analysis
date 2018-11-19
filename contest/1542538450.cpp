#include<iostream>
using namespace std;
int main(){
	string password, word, temp;
	int n, flag1 = 0, flag2 = 0, flag = 0;
	cin >> password;
	if(password[0] == password[1])
		flag = 1;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> word;
		if(word == password){
			cout << "YES";
			return 0;
		}
		else{
			if(flag == 0){
				if(word[0] == password[1] && flag1 != 1){
					flag1 = 1;
				}
				if(word[1] == password[0] && flag2 != 1){
					flag2 = 1;
				}
			}
			else
				{
					if(word[0] == password[1] && flag1 != 1 && temp != word){
						flag1 = 1;
						temp = word;
					}
					if(word[1] == password[0] && flag2 != 1 && temp != word){
						flag2 = 1;
						temp = word;
					}
				}
		}
			
	}
	if(flag1 == 1 && flag2 == 1)
		cout << "YES";
	else
		cout << "NO";	
	
	return 0;
}