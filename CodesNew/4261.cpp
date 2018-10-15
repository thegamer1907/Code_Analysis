#include <bits/stdc++.h>
const int MAXN = 5*1e5 + 5;
const int INF = 0x3f3f3f3f;
using namespace std;
int n;
char op;
string s[MAXN], last;

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> op >> s[i];
	}
	for(int i = n-2; i >= 0; i--){
		if(s[i+1] > s[i]) continue;
		int len1 = s[i].length();
		int len2 = s[i+1].length();
		for(int j = 0; j < len1; j++){
            if(s[i][j] > s[i+1][j] || j >= len2){
                s[i] = s[i].substr(0, j);
                break;
            }
        }
	}
	for(int i = 0; i < n; i++){
		cout << "#" << s[i] << endl; 
	}
}