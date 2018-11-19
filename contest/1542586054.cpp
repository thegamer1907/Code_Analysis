#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <string.h>
#include <vector>
#include <map>
#include <queue>
#include <unordered_map>
using namespace std;
string arr[105];
int n;
string s;
bool done = false;
int main(){
	cin >> s;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for (int o = 0; o < n; o++){
		if (done){
			break;
		}
		string s2 = arr[o];
		for (int j = 0; j < n; j++){
			if (done){
				break;
			}
			string s3 = s2;
			s3 += arr[j];
			for (int k = 0; k < s3.length() - 1; k++){
				string s4;
				s4 += s3[k];
				s4 += s3[k + 1];
				if (s4 == s){
					cout << "YES" << endl;
					done = true;
					break;
				}
			}
			 
		}
	}
	if (!done){
		cout << "NO" << endl;
	}
	return 0;
}