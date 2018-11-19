#include <iostream>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <queue>
#include <vector>
#define lld long long
#define PB push_back
#define F first
#define S second
#define jizz cin.tie(0);ios_base::sync_with_stdio(0);
#define endl '\n'
using namespace std;
typedef pair<int,int> Pair;
int f[30],b[30];
int main(){jizz
	string s;cin >> s;
	int n;cin >> n;
	while(n--){
		string ss;cin >> ss;
		if(ss == s)return cout << "YES" <<endl,0;
		f[ss[0]-'a']++;
		b[ss[1]-'a']++;
	}
	if(b[s[0]-'a'] && f[s[1]-'a'])cout << "YES" << endl;
	else cout << "NO" <<endl;
	return 0;
}

