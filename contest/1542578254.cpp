#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
const int maxn = 100005;
int nu[maxn][6];
int cnt[22];
int main() {
	ios::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < k; j++) {
			cin>>nu[i][j];
		}
	}
	for(int i = 0; i < n; i++) {
		if(nu[i][0] == 0 ) {
			if(nu[i][1] == 0) {
				if(nu[i][2] == 0) {
					if(nu[i][3] == 0) {
						cnt[16]++;
					}
					else {
						cnt[1]++;
					}
				}
				else {
					if(nu[i][3] == 0) {
						cnt[2]++;
					}
					else{
						cnt[10]++;
					}
				}
			}
			else {
				if(nu[i][2] == 0) {
					if(nu[i][3] == 0) {
						cnt[3]++;
					}
					else {
						cnt[9]++;
					}
				}
				else {
					if(nu[i][3] == 0) {
						cnt[8]++;
					}
					else{
						cnt[14]++;
					}
				}
			}
		}
		else {
			if(nu[i][1] == 0) {
				if(nu[i][2] == 0) {
					if(nu[i][3] == 0) {
						cnt[4]++;
					}
					else {
						cnt[7]++;
					}
				}
				else {
					if(nu[i][3] == 0) {
						cnt[6]++;
					}
					else{
						cnt[13]++;
					}
				}
			}
			else {
				if(nu[i][2] == 0) {
					if(nu[i][3] == 0) {
						cnt[5]++;
					}
					else {
						cnt[12]++;
					}
				}
				else {
					if(nu[i][3] == 0) {
						cnt[11]++;
					}
					else{
						cnt[15]++;
					}
				}
			}
		}
	}
	if(cnt[16]) cout<<"YES"<<endl;
	else if(cnt[1]) {
		if(cnt[2]||cnt[3]||cnt[4]||cnt[5]||cnt[6]||cnt[8]||cnt[11])
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else if(cnt[2]) {
		if(cnt[3]||cnt[4]||cnt[5]||cnt[7]||cnt[9]||cnt[12])
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else if(cnt[3]) {
		if(cnt[4]||cnt[6]||cnt[7]||cnt[10]||cnt[13])
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else if(cnt[4]) {
		if(cnt[8]||cnt[9]||cnt[10]||cnt[14])
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else if(cnt[5]) {
		if(cnt[10])
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else if(cnt[6]) {
		if(cnt[9])
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else if(cnt[7]) {
		if(cnt[8])
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else cout<<"NO"<<endl;
	
	return 0;
}
				