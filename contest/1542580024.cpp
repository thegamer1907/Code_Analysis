#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
void Genawy(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
}

int main(){
	string s; cin >> s;
	int n; cin >> n;
	vector<string>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			string t1 = v[i] + v[j];
			string t2 = v[j] + v[i];
			if (t1.find(s) != -1 || t2.find(s) != -1){
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}