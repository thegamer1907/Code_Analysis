#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;
#define ll long long 

const int MAXN = (int)(2e5 + 7);
int n;

int sum(int n){
	int res = 0;
	while(n){
		res += n % 10;
		n /= 10;
	}
	return res;
}

int main(){
	//freopen("test", "r", stdin);
	while(cin >> n){
		int nex = 19;
		int cnt = 1;
		while(cnt <= n){
			if(cnt == n){
				cout << nex << endl;
				break;
			}
			nex += 9;
			if(sum(nex) == 10) ++cnt;
		}
	}
	return 0;
}
