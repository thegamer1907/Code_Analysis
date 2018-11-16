/*----------------by syr----------------*/
/*
  -----  -----  -----
  |   |  |---|    _/
  |   |  | \_    /
  -----  |   \  -----

  |---\  \   /  |\  /|
  |   |   \_/   | \/ |
  |   |   / \   |    |
  |---/  /   \  |    |
*/
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<deque>
#include<fstream>
#include<functional>
#include<iomanip>
#include<iostream>
#include<iterator>
#include<limits>
#include<list>
#include<map>
#include<math.h>
#include<queue>
#include<set>
#include<stack>
#include<stdio.h>
#include<sstream>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

#define MP make_pair
#define PB push_back
#define FST first
#define SND second
#define FOR(i,x,y) for(int i=(x);i<(y);i++)
#define REP(i,x,y) for(int i=(x);i<=(y);i++)

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

const int INF=1e9+7;
const int maxn=3e4+5;

int n,t;
int a[maxn],nxt[maxn];
bool vis[maxn];

int main(){
	scanf("%d%d",&n,&t);
	nxt[n]=n+1;
	REP(i,1,n-1){
		scanf("%d",a+i);
		nxt[i]=i+a[i];
	}
	int i=1;
	while(i<=n) vis[i]=true,i=nxt[i];
	if(vis[t]) puts("YES");
	else puts("NO");
	return 0;
}
