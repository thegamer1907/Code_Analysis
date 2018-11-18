#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;

int main() {
	string s; cin>>s;
	int n; cin>>n;
	char x,y;
	set<char> b,a;
	set<string> c;
	for (int i=0; i<n; i++) {
		string t; cin>>t;
		a.insert(t[1]);
		b.insert(t[0]);
		c.insert(t);
	}
	if((a.find(s[0])!=a.end() && b.find(s[1])!=b.end())||c.find(s)!=c.end()) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
