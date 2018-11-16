#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,t;
	cin >> n >> t;
	
	int flag[n];
	memset(flag,-1,sizeof(flag));
	
	string input;
	cin >> input;
	
	for (int tt=0;tt<t;tt++) {
		int i = 0;
		while (input[i]) {
			if (flag[i] == tt) {
				i++;
				continue;
			}
			
			if (input[i] == 'B' && input[i+1] == 'G') {
				swap(input[i],input[i+1]);
				flag[i+1]++;
			}
		
			flag[i]++;
			
			i++;
		}
	}
	
	cout << input << endl;
	
	return 0;
}