#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;

	char n = str.at(0);
	int count = 1, flag = 0;
	for(int i=1; i<str.length(); i++){
		if(str.at(i)==n)
			count++;
		else{
			count = 1;
			n = str.at(i);
		}
		if(count==7){
			flag = 1;
			break;
		}
	}

	if(flag)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}