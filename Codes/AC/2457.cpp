#pragma comment(linker, "/STACK:102400000,102400000")
#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <vector>
#include <stack>
#include <cctype>
#include <set>
#include <ctype.h>
#include <string.h>
#define inf 0x3f3f3f3f
#define eps 0.0000001
using namespace std;
typedef long long ll;
typedef pair<int , int> P;
const int maxn = 1e7 + 10;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
int num[maxn];
bool book[maxn];
int ans[maxn];
void solve(){
	for(int i = 2 ; i < maxn ; i ++){
		book[i] = true;
	}
	memset(ans,0,sizeof(ans));
	for(int i = 2 ; i < maxn ; i ++){
		if(book[i]){
			for(int j = i ; j < maxn ; j += i){
				book[j] = false;
				ans[i] += num[j];
			}
		}
	}
	for(int i = 2 ; i < maxn ; i ++){
		ans[i] += ans[i-1];
	}
	//memset(num,0,sizeof(num));
}
int n,m;
int main(int argc, char const *argv[])
{
	//init();
	while(cin >> n){
		memset(num,0,sizeof(num));
		for(int i = 0 ; i < n ; i ++){
			int x;
			scanf("%d",&x);
			num[x] ++;
		}
		solve();
		cin >> m;
		for(int i = 0 ; i < m ; i ++){
			int l,r;
			scanf("%d%d",&l,&r);
			if(r >= maxn)r = maxn - 1;
			if(l >= maxn)l = maxn;
			//if(l == 0)l ++;
			cout << ans[r] - ans[l-1] << endl;
		}
	}
	return 0;
}




