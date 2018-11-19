#include<iostream>
#include<queue>
#include<set>
#include<algorithm>
#include<map>
using namespace std;

int asd[2];
string pwd, word;
int n;

int main() {
	cin >> pwd;
	
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> word;
		if(word.compare(pwd) == 0) {
			cout << "YES\n";
			return 0;
		}
		if(word[0] == pwd[1])
			asd[0]++;
		if(word[1] == pwd[0])
			asd[1]++;
	}
	if(asd[0] && asd[1])
		cout << "YES";
	else cout << "NO";
	
}
