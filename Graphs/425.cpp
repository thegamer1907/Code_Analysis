#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n,t;
	cin >> n >> t;
	string s;
	cin >> s; 
	for (int k=0;k<t;k++) {
		for (int i=1;i<s.length();i++) {
			if (s[i]=='G' && s[i-1]=='B') {
					s[i]='B';
					s[i-1]='G';
					i++;
				}
			
		}
	}
	// 5 3
	// BGGGG 
	// GGGBG
	cout << s;
	
	return 0;
}