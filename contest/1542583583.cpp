#include<iostream>
#include<string>

#define MAX 105
using namespace std;

int main( )
{
	string s1;
	cin >> s1;
	int n;
	cin >> n;
	string str[MAX];
	for(int j = 0; j < n; j++)
		cin >> str[j];
	bool ok1 = false,ok2 = false;
	for(int j = 0; j < n; j++){
		if(str[j][0] == s1[1]) ok1 = true;
		if(str[j][1] == s1[0]) ok2 = true;
		if(str[j] == s1){
			ok1 = ok2 = true;
			break;
		}
	}
	if(ok1 && ok2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

