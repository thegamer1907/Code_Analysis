#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>

using namespace std;
typedef long long ll;
int main()
{
	int n,t;
	cin >> n >> t;
	string str;
	cin >> str;
	for(int i = 0; i < t; i++){
		for(int j = 0; j < str.size()-1; j++){
			if(str[j]=='B'&&str[j+1]=='G'){
				swap(str[j],str[j+1]);
				j++;
			}	
		}
	}
	cout << str;
    return 0;
}
