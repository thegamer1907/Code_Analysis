#include <algorithm>
#include <cstdio>
#include <cstring>
#include <set>
using namespace std;

struct word{
	int len;
	bool head[30];
	bool tail[30];
	set<int> s[30];
};

bool done, combin[60], combin2[60], combin3[60];
char s[101][101];
int n, m, a, b, num, ans;
word w[201];
set<int>::iterator it;
int main (){
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf("%s", s[i]);
		w[i].len = strlen(s[i]);
		for (int j = 0; j < w[i].len; j++){
			num = 0;
			for (int k = j; k < min(w[i].len, j + 29); k++){
				num = num * 2 + s[i][k] - '0';
				w[i].s[k - j + 1].insert(num);
			}
		}
		if (w[i].len < 30){
			for (int j = 0; j < w[i].len; j++){
				w[i].head[j] = s[i][j] - '0';
				w[i].tail[j] = s[i][j] - '0';
			}
		} else {
			for (int j = 0; j < 29; j++)
				w[i].head[j] = s[i][j] - '0';
			for (int j = w[i].len - 29; j < w[i].len; j++)
				w[i].tail[j - (w[i].len - 29)] = s[i][j] - '0';
			w[i].len = 29;
		}
	}
	scanf("%d", &m);
	for (int i = n + 1; i <= n + m; i++){
		scanf("%d %d", &a, &b);
		w[i].len = w[a].len + w[b].len;
		for (int j = 0; j < w[a].len; j++)
			combin[j] = w[a].tail[j];
		for (int j = w[a].len; j < w[i].len; j++)
			combin[j] = w[b].head[j - w[a].len];
		
		for (int j = 1; j <= 29; j++){
			w[i].s[j] = w[a].s[j];
			if (a != b){
				for (it = w[b].s[j].begin(); it != w[b].s[j].end(); it++)
					w[i].s[j].insert(*it);
			}
		}
		
		for (int j = 0; j < w[i].len; j++){
			num = 0;
			for (int k = j; k < min(w[i].len, j + 29); k++){
				num = num * 2 + combin[k];
				w[i].s[k - j + 1].insert(num);
			}
		}
		
		for (int j = 0; j < w[a].len; j++){
			combin2[j] = w[a].head[j];
			combin3[j] = w[a].tail[j];
		}
		for (int j = w[a].len; j < w[i].len; j++){
			combin2[j] = w[b].head[j - w[a].len];
			combin3[j] = w[b].tail[j - w[a].len];
		}
		
		if (w[i].len < 30){
			for (int j = 0; j < w[i].len; j++){
				w[i].head[j] = combin2[j];
				w[i].tail[j] = combin3[j];
			}
		} else {
			for (int j = 0; j < 29; j++)
				w[i].head[j] = combin2[j];
			for (int j = w[i].len - 29; j < w[i].len; j++)
				w[i].tail[j - (w[i].len - 29)] = combin3[j];
			w[i].len = 29;
		}
		
		ans = 0;
		while (w[i].s[ans + 1].size() == 1 << (ans + 1))
			ans++;
		printf("%d\n", ans);
	}
	return 0;
}