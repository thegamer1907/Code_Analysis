#include <cstdio>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <sstream>
#include <cctype>
using namespace std;

#define PQ priority_queue
#define P pair<int,int>
#define CLA(array) memset(array,0,sizeof array)
#define CLINF(array) memset(array,0x3f,sizeof array)
#define CLF(array) memset(array,-1,sizeof array)
#define DB(a) cout << "DEBUG " << a << endl;
typedef long long LL;
typedef unsigned long long ULL;
const int MAXN = 100000 + 50;
const int INF = 1 << 30;
int n;
string a[MAXN];
string s,t;


int main(){
    //ios_base::sync_with_stdio(false);
#ifdef LOCAL
//  freopen(".\in.txt", "r", stdin);
//  freopen(".\out.txt","w",stdout);
#endif
	int flag = 0;
	cin >> s;
	cin >> n;
	for(int i = 0;i < n;++i) {
		cin >> a[i];
		if(a[i] == s) flag = 1;
	}
	for(int i = 0;i < n;++i) {
		for(int j = 0;j < n;++j) {
			string tmp;
			tmp += a[i][1];
			tmp += a[j][0];
			if(tmp == s) flag = 1;
		}
	}
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
    return 0;
}
