#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

#include <cstdlib>
#include <cstdio>
#include <cassert>

using namespace std;

const int MAXK = 4;


int activeMask[20];

string result(int n, int k)
{
	
	if(activeMask[0]) return "YES";

	for(int i = 0; i < (1<<k); i++) {
		for(int j = i + 1; j < (1<<k); j++) {
			if(activeMask[i] && activeMask[j]) {
				if((i & j) == 0) {
					return "YES";
				}
			}
		}
	}


	
	return "NO";
}

int main() {

	string password;
	cin>>password;

	int n;
	cin>>n;
	vector<string> words;
	for(int i = 0; i < n; i++) {
		string word;
		cin>>word;
		words.push_back(word);
	}

	int ok = 0;
	for(int i = 0; i < words.size(); i++) {
		if(words[i] == password) {
			ok = 1;
		}
	}

	for(int i = 0; i < words.size(); i++) {
		for(int j = 0; j < words.size(); j++) {
			string str = words[i] + words[j];
			if(str.find(password) != string::npos) {
				ok = 1;
			}
		}
	}



	if(ok)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	// int n, k;
	// cin>>n>>k;

	// for(int i = 0; i < n; i++) {
	// 	int m = 0;
	// 	for(int j = 0; j < k; j++) {
	// 		int v;
	// 		cin>>v;
	// 		m = m * 2 + v;
	// 	}
	// 	activeMask[m] = 1;
	// }

	// cout<<result(n, k)<<endl;
	
	return 0;
}