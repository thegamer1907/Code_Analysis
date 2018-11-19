#include <bits/stdc++.h>

using namespace std;
#define N 20
#define K 4
int n, k, pos;
int p[N];
bool mark[N];
int main(){
	cin >> n >> k;
	int a, tmp;
	int t;
	bool flag = false;
	for(int i = 0; i < n; i++){
		t = 1;
		tmp = 0;
		for(int j = 0; j < k; j++){
			cin >> a;
			tmp += a * t;
			t *= 2;
		}
		if(tmp == 0) flag = true;
		if(!mark[tmp]){
			mark[tmp] = true;
			//cout << tmp << endl;
			p[pos++] = tmp;
		}
	}
	if(flag){ cout << "YES" << endl; return 0;}
	for(int i = 0; i < pos; i++){
		for(int j = i+1; j < pos; j++){
			int tmp1 = p[i];
			int tmp2 = p[j];
			if((p[i] & p[j]) == 0){
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}