#include <bits/stdc++.h>
#define NN 305

using namespace std;

typedef pair<int , int > PII;

vector<PII> v;

int vis[NN][NN];
int dr[] = {1,0,-1,0};
int dc[] = {0,1,0,-1};

int main(){
	int n, m, k;
	scanf("%d%d%d",&n, &m, &k);
	PII st = PII(1, 1);
	vis[1][1] = 1;
	v.clear();
	v.push_back(st); int cnt = 1, en = n * m, d = 0;
	while(cnt < en){
		if(d == 4) d = 0;
		int rr = st.first + dr[d];
		int cc = st.second + dc[d];
		if(rr > n || rr < 1 || cc < 1 || cc > m || vis[rr][cc] == 1){
			d ++; continue;
		}
		vis[rr][cc] = 1; st = PII(rr, cc); v.push_back(st);
		cnt ++;
	}
	int tt = 0;
	for(int i = 0 ; i<k - 1; i++){
		printf("2");
		for(int j = 0; j<2; j++){
			printf(" %d %d", v[tt].first, v[tt].second);
			tt ++;
		}
		puts("");
	}
	printf("%d",v.size() - tt);
	for(int i = tt; i<v.size(); i++){
		printf(" %d %d", v[i].first, v[i].second);
	}
	puts("");
	return 0;
}
                 