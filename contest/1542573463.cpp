#include <iostream>
#include <cstdio>
#include<list>
#include<iomanip>
#include<cmath>
#include<queue>
#include <functional>
#include<stdio.h>
#include<assert.h>
#include<stack>
#include<sstream>
#include <cstdlib>
#include<map>
#include<algorithm>
#include<iostream>
#include<set>
#include<utility>
#include<memory.h>
#include<string>
#include<vector>
#include<numeric>
using namespace std;
#define ll  long long
#define pb push_back
#define sz(v)               ((int)((v).size()))
#define all(x)          (x).begin(),(x).end()
#define REP(i, v)       for(int i=0;i<sz(v);i++)
typedef pair<int,int> pii;
#define ios std::ios_base::sync_with_stdio(false);
using namespace std;

int main() {
	ios
	string s;
	cin >> s;
	int n;
	cin >> n;


	vector<string> v;
	for(int i = 0 ; i < n ; ++i){
		string a;
		cin >> a;
		if(a == s) {
			cout <<"YES" << "\n";
			return 0;
		}
		v.pb(a);
	}
	for(int i = 0 ; i < n ; ++i) {
		for(int j = 0 ; j < n ; ++j) {
			if(v[i][1] == s[0] && v[j][0] == s[1]){
				cout << "YES" << "\n";
				return 0;
			}
		}
	}
	cout << "NO" << "\n";


}
