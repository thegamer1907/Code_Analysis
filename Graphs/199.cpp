#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,t;
	cin >> n >> t;
	string s;
	cin >> s;
	while(t){
		for(int i=n;i>0;i--){
			if(s[i]=='G' && s[i-1]=='B'){
				s[i]='B';
				s[i-1]='G';
				//cout << s << endl;
				i--;
			}
		}
		t--;
	}
	cout << s;
}