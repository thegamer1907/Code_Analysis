#include <bits/stdc++.h>
using namespace std;

#define oo 100000000000000

long long breadCnt, sausageCnt, cheeseCnt;
long long breadReq, sausageReq, cheeseReq;
long long breadPrc, sausagePrc, cheesePrc;
long long r;

bool check(long long mid){
	long long money = r;
	money -= max(0ll, mid * breadReq - breadCnt) * breadPrc;
	if(money < 0)return 0;
	money -= max(0ll, mid * sausageReq - sausageCnt) * sausagePrc;
	if(money < 0)return 0;
	return max(0ll, mid * cheeseReq - cheeseCnt) * cheesePrc <= money;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
	string s;
	while(cin >> s) {
		breadReq = sausageReq = cheeseReq = 0;

		for(int i = 0; i < (int)s.length(); ++i){
			breadReq += s[i] == 'B';
			sausageReq += s[i] == 'S';
			cheeseReq += s[i] == 'C';
		}
		cin >> breadCnt >> sausageCnt >> cheeseCnt;
		cin >> breadPrc >> sausagePrc >> cheesePrc;
		cin >> r;

		long long left = 0, right = oo, mid;
		while(left < right){
			mid = left + (right - left + 1) / 2;
			if(check(mid))left = mid;
			else right = mid - 1;
		}
		cout << left << endl;
	}
}