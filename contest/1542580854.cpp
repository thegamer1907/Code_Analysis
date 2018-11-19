#include<iostream>
#include<string>
using namespace std;
int main(){
	string str,str1;
	int n,i,a=0,b=0;
	cin >> str >> n;
	for(i=0;i<n;i++){
		cin >> str1;
		if(str1==str){
			cout << "YES" << '\n';
			return 0;
		}
		if(str1[1]==str[0]) a=1;
		if(str1[0]==str[1]) b=1;
		if((a==1 && str[1]==str1[0]) || (b==1 && str[0]==str1[1])){
			cout << "YES" << '\n';
			return 0;
		}
	}
	cout << "NO" << '\n';
	return 0;
}
