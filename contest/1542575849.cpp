#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<algorithm>
using namespace std;
int dist[13][13];
int pre(int x){
	if (x == 1) return 12; else return x-1;
}
int nxt(int x){
	if (x == 12) return 1; else return x+1;
}
int h,m,s,t1,t2;
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
//	printf("h = %d\n",h);
	memset(dist,0,sizeof(dist));
	
	for (int i=1;i<=12;i++){
		dist[i][nxt(i)] = 1;
		dist[nxt(i)][i] = 1;
		dist[i][i] = 1;
	}
//	printf("h = %d\n",h);
/*	for (int i=1;i<=12;i++){
		for (int j=1;j<=12;j++){
			printf("%d %d:%d\n",i,j,dist[i][j]);
		}
	}
*/	
//	printf("h = %d\n",h);
	if (m == 0 && s == 0){
		dist[pre(h)][h] = 0;
		dist[h][pre(h)] = 0;
		dist[nxt(h)][h] = 0;
		dist[h][nxt(h)] = 0;
	} else{
		dist[nxt(h)][h] = 0;
		dist[h][nxt(h)] = 0;
//		printf("(%d)(%d)\n",h,nxt(h));
	}
	
	if (m % 5 == 0 && s == 0){
		m /= 5;
		if (m == 0) m = 12;
		dist[pre(m)][m] = 0;
		dist[m][pre(m)] = 0;
		dist[nxt(m)][m] = 0;
		dist[m][nxt(m)] = 0;
	} else{
		m /= 5;
		if (m == 0) m = 12;
		dist[nxt(m)][m] = 0;
		dist[m][nxt(m)] = 0;
	}
	
	if (s % 5 == 0){
		s /= 5;
		if (s == 0) s = 12;
		dist[pre(s)][s] = 0;
		dist[s][pre(s)] = 0;
		dist[nxt(s)][s] = 0;
		dist[s][nxt(s)] = 0;
	} else{
		s /= 5;
		if (s == 0) s = 12;
		dist[nxt(s)][s] = 0;
		dist[s][nxt(s)] = 0;
	}
	
//	for (int i=1;i<=12;i++){
//		if (dist[pre(i)][i]) printf("%d->%d:%d\n",pre(i),i,dist[pre(i)][i]);
//	}
	
	for (int k=1;k<=12;k++){
		for (int i=1;i<=12;i++){
			for (int j=1;j<=12;j++){
				if (dist[i][k]==1 && dist[k][j]==1) dist[i][j] = 1;
			}
		}
	}
//	for (int i=1;i<=12;i++){
//		for (int j=1;j<=12;j++){
//			printf("%d %d:%d\n",i,j,dist[i][j]);
//		}
//	}
	if (dist[t1][t2]) puts("YES"); else puts("NO");
	return 0;
}