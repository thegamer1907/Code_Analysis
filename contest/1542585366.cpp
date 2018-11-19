#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <cstdio>
#define pb push_back
#define ll long long
#define f first
#define s second
#define mp make_pair

using namespace std;

string s;
int n;

int main(){	
	cin >> s;
	cin >> n;
	string ans1, ans2;
	for(int i = 1; i <= n; i++){
		string x;
		cin >> x;
		if(s[0] == x[0] && s[1] == x[1]){
			cout << "YES";
			return 0;
		} 
		if(x[0] == s[1] && s[0] == x[1]){
			cout << "YES";
			return 0;
		}
		if(s[0] == x[1]){
			ans1 = x[1];
		}
		if(s[1] == x[0])
			ans2 = x[0];
	}
	string ans = ans1 + ans2;
	if(ans == s)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}