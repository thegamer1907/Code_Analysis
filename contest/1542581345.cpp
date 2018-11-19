#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int MAXN = 200;
const int MAXS = (1<<12);
const int MAXC = 12;
bool vis[MAXN+10][MAXC][MAXS+10];
int cnt[MAXN+10][MAXC];
char pre[MAXN+10][MAXN+10], bak[MAXN+10][MAXN+10], str[MAXN+10];
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%s", str);
        strcpy(pre[i], str);
        pre[i][MAXC] = '\0';
        int len = strlen(str);
        for(int j=0;j<len;j++){
            int num = 0;
            for(int k=j;k<len;k++){
                if(k-j+1>MAXC) break;
                num = (num<<1)|(str[k]-'0');
                if(!vis[i][k-j][num]){
                    vis[i][k-j][num] = true;
                    cnt[i][k-j]++;
                }
            }
        }
        reverse(str, str+len);
        strcpy(bak[i], str);
        bak[i][MAXC] = '\0';
    }
    int q, a, b, all;
    scanf("%d", &q);
    while(q--){
        scanf("%d%d", &a, &b);
        n++;
        memcpy(vis[n], vis[a], sizeof vis[n]);
        memcpy(cnt[n], cnt[a], sizeof cnt[n]);
        for(int i=0;i<MAXC;i++){
            all = (1<<(i+1));
            for(int j=0;j<all;j++)
                if(!vis[n][i][j] && vis[b][i][j]){
                    vis[n][i][j] = true;
                    cnt[n][i] ++;
                }
        }
        strcpy(pre[n], pre[a]); strcpy(bak[n], bak[b]);
        if(strlen(pre[n]) < MAXC){
            sprintf(pre[n], "%s%s", pre[a], pre[b]);
            pre[n][MAXC] = '\0';
        }
        if(strlen(bak[n]) < MAXC){
            sprintf(bak[n], "%s%s", bak[b], bak[a]);
            bak[n][MAXC] = '\0';
        }
        int pre_num = 0, len_pre = strlen(pre[b]), len_bak = strlen(bak[a]);
        for(int i=0;i<len_bak;i++){
            pre_num = pre_num|((bak[a][i]-'0')<<i);
            int cur_num = pre_num;
            for(int j=0;j<len_pre;j++){
                if(j+i+2 > MAXC)
                    break;
                cur_num = (cur_num<<1)|(pre[b][j]-'0');
                if(!vis[n][i+j+1][cur_num]){
                    vis[n][i+j+1][cur_num]=true;
                    cnt[n][i+j+1]++;
                }
            }
        }
        int ans = MAXC-1;
        while(ans >= 0 && cnt[n][ans] != (1<<(ans+1)))
            ans--;
        printf("%d\n", ans+1);
    }

    return 0;
}
