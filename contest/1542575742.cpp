#include<iostream>
#include<string>
using namespace std;
int main (){
	
	
	string Data , Attack[101] , Target;
	int Data2 , Hacked=0;
	cin >> Data >> Data2;
	for(int i=0 ; i<Data2 ; i++)cin >> Attack[i];
	for(int i=0 ; i<Data2 ; i++){
	        if(Attack[i][0]==Data[0] && Data[1]==Attack[i][1])return cout <<"YES" , 0;
			if(Attack[i][1]==Data[0] && Hacked==0){Hacked++  , i=0;}
			if(Attack[i][0]==Data[1] && Hacked==1)return cout << "YES", 0;
	}
	cout << "NO";
	return 0;
}