#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int INF = 0x3c3c3c3c;
const long long INFL = 0x3c3c3c3c3c3c3c3c;
const int MAX_L = 1e6 + 9;

vector<int> Z;
int ZCount[MAX_L];
int partialSum[MAX_L];

vector<int> getZArray(string& s){
	int sz = s.size();
	vector<int> res(sz);
	int l = 0, r = 0;
	for(int i = 1; i < sz; i++){
		if(r < i){
			l = r = i;
			while(r < sz && s[r - l] == s[r]) r++;
			r--;
			res[i] = r - l + 1;
		}
		else{
			if(i - l + res[i - l] < r - l + 1){
				res[i] = res[i - l];
			}
			else{
				l = i;
				while(r < sz && s[r - l] == s[r]) r++;
				r--;
				res[i] = r - l + 1;
			}
		}
	}
	return res;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	string S;
	cin >> S;
	int sz = S.size();
	Z = getZArray(S);
	for(int i = 0; i < sz; i++){
		ZCount[Z[i]]++;
	}
	for(int i = 1; i < sz; i++){
		partialSum[i] = ZCount[i] + partialSum[i - 1];
	}
	int len = -1;
	for(int i = 1; i < sz; i++){
		if(sz - i == Z[i] && partialSum[sz - 1] - partialSum[sz - i - 1] >= 2){
			len = sz - i;
			break;
		}
	}
	cout << (len == -1 ? "Just a legend" : S.substr(0, len));
	return 0;
}