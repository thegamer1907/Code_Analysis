/*input
4 1
GGGB
*/
#include <bits/stdc++.h>

#define MAXN 55

using namespace std;

string s;
int n, t;

int main(){
	cin >> n >> t;
	cin >> s;

	for(int i = 0; i < t; i++){
		for(int j = 0; j < n - 1; j++){
			if(s[j] == 'B' && s[j + 1] == 'G'){
				swap(s[j], s[j + 1]);
				j++;
			}
		}
	}

	cout << s << endl;

	return 0;
}