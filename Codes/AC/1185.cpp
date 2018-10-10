#include<bits/stdc++.h>
using namespace std;
char st1[1010][510],st2[1010][510];
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    for(int i = 1 ; i <= N; i++)
        scanf("%s",st1[i]);
    for(int i = 1 ; i <= M; i++)
        scanf("%s",st2[i]);
    int ans = 0;
    for(int i = 1 ; i <= N; i++)
        for(int j = 1 ; j <= M; j++)
            if(strcmp(st1[i],st2[j]) == 0)
                ans++;
    N -= ans / 2 ,M -= ans / 2;
    if(ans % 2) M--;
    if(N > M) printf("YES\n");
    else printf("NO\n");
    return 0;
}