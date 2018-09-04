#include <bits/stdc++.h>
using namespace std;

#define LB lower_bound
#define UB upper_bound
#define PB(v,a) v.push_back(a)
#define FOR(i, init, n) for(i = init; i < n; i++)
#define REV_FOR(i, n, init) for(i = init-1; i >= n; i--)
#define FOR_SET(s) for(set<int>::iterator it=s.begin(); it!=s.end(); it++)
#define OUT(a) cout << a << endl
#define OUT2(a,b) cout << a << " " << b << endl
#define IN(a) cin >> a
#define IN2(a,b) cin >> a >> b
#define IN3(a,b,c) cin >> a >> b >> c
#define FIND(set,num) (set.find(num) != set.end())
#define INS(set,num) set.insert(num)

int main() {
	ios::sync_with_stdio(false);
	int i,j,n,c=0,tmp;
	string s;
	IN(n);
	for(i = 19; c < n; i++) {
		tmp = 0;
		s = to_string(i);
		for(j = 0; j < s.length(); j++)
			tmp += s[j] - '0';
		if (tmp == 10)
			c++;
	}
	cout << i-1 << endl;
}