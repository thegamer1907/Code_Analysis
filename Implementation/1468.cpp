#include<iostream>
#include <string>
using namespace std;
int main()
{
string str1, str2;
int Counter = 1;

cin>>str1;

for( int i = 0; i < str1.length() - 1; i++ ) {
	str2 = str1[i + 1];
	if( str1[i] == str2[0] ) {
		Counter++;
	}
	else {
		Counter = 1;
	}
	//cout<<Counter<<endl;
	if( Counter >= 7 ){
		cout << "YES";
		return 0;
	}

}
cout << "NO";
		return 0;	
}