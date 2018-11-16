//>> OI Solution Info <<//
// Version: 2
// State: Progress
// Problem: ---
// ID: ---
// Timeline:
//   --- ~ --- Initialize
// Review:
//   ---
//>> End <<//
#include <iostream>
#include <stdio.h>
using namespace std;

int h,w,a[505][505],b[505][505];
char s[505][505];

int main(){
	scanf("%d %d",&h,&w);
	for(int i=1;i<=h;i++)scanf("%s",s[i]+1);
	for(int i=1;i<=h;i++)for(int j=1;j<w;j++){
	    a[i][j]=a[i][j-1]+a[i-1][j]-a[i-1][j-1];
	    if(s[i][j]=='.' && s[i][j+1]=='.')a[i][j]++;
    }
    for(int i=1;i<h;i++)for(int j=1;j<=w;j++){
	    b[i][j]=b[i][j-1]+b[i-1][j]-b[i-1][j-1];
	    if(s[i][j]=='.' && s[i+1][j]=='.')b[i][j]++;
    }
    int q;
    scanf("%d",&q);
    while(q--){
        int r1,c1,r2,c2;
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        printf("%d\n",a[r2][c2-1]-a[r1-1][c2-1]-a[r2][c1-1]+a[r1-1][c1-1]+b[r2-1][c2]-b[r1-1][c2]-b[r2-1][c1-1]+b[r1-1][c1-1]);
    }
	return 0;
}
