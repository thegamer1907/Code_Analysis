#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t, curr, i = 0;
	string que;
	cin >> n >> t;
	cin >> que;
	for (int j = 0; j < t; j++){
		i = 0;
		while(i < n){
			if (que[i] == 'B' && que[i+1] == 'G'){
				que[i] = 'G';
				que[i + 1] = 'B';
				i ++;
			}
			i ++;
		}
	
		
	}
	cout << que << endl;
}