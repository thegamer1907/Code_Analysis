#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int H, M, S, X, Y;

	cin >> H >> M >> S >> X >> Y;
	
	M /= 5;
	S /= 5;
	
	if(M == 0) M = 12;
	if(S == 0) S = 12;

	int pos = X;
	while(true){
		if(pos == Y){
			cout << "YES";
			return 0;
		}
		else{
			if(pos == H or pos == M or pos == S) break;
			else ++pos;
			if(pos > 12) pos = 1;
		}
	}

	pos = X - 1;
	if(pos == 0) pos = 12;
	while(true){
		if(pos == H or pos == M or pos == S) break;
		else if(pos == Y){
			cout << "YES";
			return 0;
		}
		else{
			--pos;
			if(pos == 0) pos = 12;
		}
	}

	cout << "NO";
}