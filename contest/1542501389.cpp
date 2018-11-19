#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 1e15

ll ans[30][300000], cnt = 0;
int a[300000], n, K, num[300000];
int opt[30][300000], ne[300000][30];
vector<int> pos[300000];

ll dp(int i, int jleft, int jright, int kleft, int kright){
	int jmid = (jleft+jright)/2;

	ans[i][jmid] = INF;
	opt[i][jmid] = -1;
	ll curCost = 0;

	for(int k = min(jmid-1, kright); k >= kleft; k--){
		if(ans[i][jmid] > ans[i-1][k] + curCost){
			ans[i][jmid] = ans[i-1][k] + curCost;
			opt[i][jmid] = k;
		}
		int tmp = 0, curPos = k;
		//Cari banyak angka yang sama di range (k, jmid)
		for(int ka = 16; ka >= 0; ka--){
			if(ne[curPos][ka] <= jmid){
				tmp += (1<<ka);
				curPos = ne[curPos][ka];
			}
		}
		curCost += tmp;
	}

	if(jleft <= jmid-1)
		dp(i, jleft, jmid-1, kleft, opt[i][jmid]);
	if(jmid+1 <= jright)
		dp(i, jmid+1, jright, opt[i][jmid], kright);
}

int main(){
	scanf("%d %d", &n, &K);
	//n = 20000; K = 20;
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		pos[a[i]].push_back(i);
	}
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < pos[i].size(); j++){
			int curPos = pos[i][j];
			for(int k = 0; k <= 16; k++){
				int nePos = n+1;
				if(pos[i].size() > j + (1<<k))
					nePos = pos[i][j + (1<<k)];
				ne[curPos][k] = nePos;
			}
		}
	}
	ans[0][0] = 0;
	for(int i = 1; i <= n; i++){
		ans[0][i] = INF;
	}
	for(int i = 1; i <= K; i++){
		dp(i, 1, n, 0, n);
		//Sliding window to update answer
		memset(num, 0, sizeof num);
		int curLeft = n;
		ll tmpSeg = 0;
		for(int j = n; j >= 0; j--){
			while(curLeft > opt[i][j]){
				tmpSeg += num[a[curLeft]];
				num[a[curLeft]]++;
				curLeft--;
			}
			ans[i][j] = ans[i-1][opt[i][j]] + tmpSeg;
			num[a[j]]--;
			tmpSeg -= num[a[j]];
		}
	}
	int curPos = n;
	ll totalAns = 0;
	for(int i = K; i > 0; i--){
		memset(num, 0, sizeof num);
		int nePos = opt[i][curPos];
		while(curPos > nePos){
			totalAns += num[a[curPos]];
			num[a[curPos]]++;
			curPos--;
		}
	}
	printf("%lld\n", totalAns);
}