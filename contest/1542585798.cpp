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
int h,m,s,t1,t2;
int ph,pm;

int main(){
    //ios_base::sync_with_stdio(false);
#ifdef LOCAL
//  freopen(".\in.txt", "r", stdin);
//  freopen(".\out.txt","w",stdout);
#endif
	int ans = 0;
	cin >> h >> m >> s >> t1 >> t2;
	ph = (h % 12) * 3600 + m * 60 + s;
	pm = m * 720 + s * 12;
	s *= 720;
	//cout << ph << " " << pm << " " << s << endl;
	t1 = (t1 % 12) * 3600;
	t2 = (t2 % 12) * 3600;
	int cnt = 0;
	for(int j = t1;cnt < 43200;++j,++cnt) {
		int i = (j % 43200);
		if((i % 43200) == t2){
			ans = 1;
			break;
		}
		else if(i == ph || i == pm || i == s) break;
	}
	cnt = 0;
	for(int j = t1;!ans && cnt < 43200;--j,++cnt) {
		int i = (j + 43200) % 43200;
		if(i == t2){
			ans = 1;
			break;
		}
		else if(i == ph || i == pm || i == s) break;
	}
	if(ans) cout << "YES" << endl;
	else cout << "NO" << endl;
    return 0;
}
