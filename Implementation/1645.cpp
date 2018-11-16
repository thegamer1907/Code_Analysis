#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <string>
#include <stdio.h>
#include <set>
#include <map>
#include <algorithm>
#include <queue>
#include <vector>
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second

using namespace std;

const int inf = 1e9 + 7;
const long long INF = 1e18 + 7;
const int maxn = 2e5 + 7;

string s;
int cur;
bool ok;

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	cin >> s;
	for (int i = 0; i < s.size(); i++){
		if (cur == 7){
			cout << "YES";
			return 0;
		}
		if (cur == 0){
			if (s[i] == '1'){
				ok = 1;
			}
			cur++;
		} else if (ok){
			if (s[i] == '0'){
				ok = 0;
				cur = 1;
			} else {
				cur++;
			}
		} else {
			if (s[i] == '1'){
				ok = 1;
				cur = 1;
			} else {
				cur++;
			}
		}
	}
	if (cur >= 7)
		cout << "YES";
	else
		cout << "NO";
	return 0;
} 