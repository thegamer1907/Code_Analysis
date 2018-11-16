#include <bits/stdc++.h>

using namespace std;

const int maxh = 500;
const int maxw = 500;

int h, w;
char grid[maxh][maxw+1];
int down[maxh][maxw+1];
int rht[maxh+1][maxw];

int main(void)
{
	int i, j, k;
	int q;
	int r1, c1, r2, c2;
	
	scanf("%d %d", &h, &w);
	for(i=0 ; i<h ; ++i)
		scanf("%s", grid[i]);
		
	for(i=0 ; i<h-1 ; ++i)
	{
		for(j=0 ; j<w ; ++j)
			down[i+1][j+1] = down[i][j+1]+down[i+1][j]-down[i][j]+(grid[i][j]=='.' && grid[i+1][j]=='.');
	}

	for(i=0 ; i<h ; ++i)
	{
		for(j=0 ; j<w-1 ; ++j)
			rht[i+1][j+1] = rht[i][j+1]+rht[i+1][j]-rht[i][j]+(grid[i][j]=='.' && grid[i][j+1]=='.');
	}
	
	scanf("%d", &q);
	for(k=0 ; k<q ; ++k)
	{
		scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
		
		printf("%d\n", down[r2-1][c2]+down[r1-1][c1-1]-down[r2-1][c1-1]-down[r1-1][c2]+rht[r2][c2-1]+rht[r1-1][c1-1]-rht[r2][c1-1]-rht[r1-1][c2-1]);
	}
	
	return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             