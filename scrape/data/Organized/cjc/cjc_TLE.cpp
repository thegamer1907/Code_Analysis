#include <string.h>
#include <sstream>
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <stdlib.h>    
#include <time.h> 
#include <stack>
#include <queue>
#include <set>

#include <map>
#include <vector>
#include <string>
#include <stdlib.h>

#define ll long long
#define clr(x) memset(x,0,sizeof(x))
#define _clr(x) memset(x,-1,sizeof(x))
#define fr(i,a,b) for(int i = a; i < b; ++i)
#define frr(i,a,b) for(int i = a; i > b; --i)
#define pb push_back
#define sf scanf

#define pf printf
#define mp make_pair

using namespace std;
const int N = 2000000;

int main() {
	ll n;
	int m,k;
	cin>>n>>m>>k;
	queue<int> q;
	fr(i,0,m) {
		int t;
		sf("%d",&t);
		q.push(t);
	}
	int cur = 1;
	int left = k;
	int next_cur = cur+k;
	int ep = 0;
	int ans = 0;
	while(!q.empty()) {
		if(!q.empty()&&q.front()<cur+left+ep) {
			++ans;
			int num = 0;
			while(!q.empty()&&q.front()<cur+left+ep) {
				next_cur = max(next_cur, q.front()+1);
				//printf("pop %d\n",q.front());
				q.pop();
				num++;
				continue;
			}
			ep+=num;
		}
		else {
			cur = next_cur;
			ep = 0;
		}
		//printf("cur = %d ep = %d ans = %d\n",cur,ep, ans);
	}
	printf("%d\n",ans);
}