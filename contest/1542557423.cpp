#include <iostream> 
#include <string>
#include <vector>
#include <queue> 
#include <stack> 
#include <set> 
#include <map> 
#include <algorithm> 

#define pb push_back
#define vec vector
#define YES "YES"
#define NO "NO"

using namespace std;
typedef long long ll;

template<typename T>
inline bool isIn(set<T> s, T a) {
	return s.find(a) != s.end();
}

int main() {
	string pass, t;
	cin >> pass;
	ll n;
	cin >> n;
	set<char> fst, sec;
	bool flag = false;
	for (ll i = 0; i < n; i++) {
		cin >> t;
		fst.insert(t[0]);
		sec.insert(t[1]);
		flag += t == pass;
	}

	if (flag || isIn<char>(fst, pass[1]) && isIn<char>(sec, pass[0]))
		cout << YES;
	else
		cout << NO;

	return 0;
}