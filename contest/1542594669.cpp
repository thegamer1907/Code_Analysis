#include <bits/stdc++.h>
using namespace std;

string password, A[110];
int N;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> password;
	cin >> N;
	for(int i=1; i<=N; ++i) cin >> A[i];
	bool yes = 0;
	for(int i=1; i<=N; ++i){
		for(int j=1; j<=N; ++j){
			if(A[i] == password) yes = 1;
			string k = "";
			k = k + A[i][1] + A[j][0];
			if(k == password) yes = 1;
		}
	}
	if(yes) cout << "YES";
	else cout << "NO";
}