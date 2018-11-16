#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <iomanip>
#define zero 1e-7
#define esp 1e-6
#define inf 0x3f3f3f3f
#define maxx 1005
#define minn 1e5
#define pi 3.1415926
 
using namespace std;

int main()
{   
	int n, m, k;
	int num[105];
	
	while (scanf("%d%d", &n, &m) != EOF){
		k = 0;
		for (int i = 1; i <= n; i++){
			scanf("%d", &num[i]);
		}
		for (int i = 1; i <= n; i++){
			if (num[i]>0 && num[i]>=num[m]){
				k++;
			}
			else{
				break;
			}
		}
		printf("%d\n", k);
	}
	
    return 0;
}
/*
char str[25], maze[25][25];
int m, n, x, y, res;
int vis[25][25];
int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};

void dfs(int x, int y){
	int xx, yy;
	
	for (int i = 0; i < 4; i++){
		xx = x+dir[i][0];
		yy = y+dir[i][1];
		if (0<=xx && xx<n && 0<=yy && yy<m && !vis[xx][yy] && maze[xx][yy]=='.'){
			res++;
			vis[xx][yy] = 1;
			maze[xx][yy] = '#';
			dfs(xx, yy);
		}
	}
}

int main(){
	while (scanf("%d%d", &m, &n) != EOF){
		if (n==0 && m==0){
			break;
		}
		else{
			getchar();
			res = 1;
			memset(vis, 0, sizeof(vis));
			for (int i = 0; i < n; i++){
				gets(str);
				for (int j = 0; j < m; j++){
					maze[i][j] = str[j];
					if (maze[i][j] == '@'){
						x = i;
						y = j;
						vis[i][j] = 1;
					}
				}
			}
			dfs(x, y);
			printf("%d\n", res);
		}
	}
	
	return 0;
}
*/
/*
6 9
....#.
.....#
......
......
......
......
......
#@...#
.#..#.
*/
