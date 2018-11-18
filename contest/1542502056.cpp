#include<bits/stdc++.h>
using namespace std;
char c[110][10]; int num[1000][3];
int main()
{
    scanf("%s",c[0]+1);
    int N,i; scanf("%d",&N);
    for(i=1;i<=N;i++) scanf("%s",c[i]+1);
    for(i=1;i<=N;i++){
        if(c[i][1]==c[0][2]&&c[i][2]==c[0][1]) return puts("YES"),0;
        if(c[i][1]==c[0][1]&&c[i][2]==c[0][2]) return puts("YES"),0;
    }
    for(i=1;i<=N;i++) {
        num[c[i][1]][2]++; num[c[i][2]][1]++;
    }
    if(num[c[0][2]][2]&&num[c[0][1]][1]) return puts("YES"),0;
    return puts("NO"),0;
    return 0;
}