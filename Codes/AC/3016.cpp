#include<bits/stdc++.h>
#define MAXN 1000010
using namespace std;
int par[MAXN*2];
int len[MAXN*2];
int ch[MAXN*2][26];
char s[MAXN*2];
int last;
void init() {
    int now = 0;
    par[now] = -1;
    len[now] = 0;
    for (int i = 0; i < 26; i++) {
        ch[now][i] = 0;
    }
}

void extend(int c, int m, int &cnt, int &tmp) {
    len[++cnt] = m;
    for (int i = 0; i < 26; i++) {
        ch[cnt][i] = 0;
    }
    int p = tmp;
    while (p != -1 && ch[p][c] == 0) {
        ch[p][c] = cnt;
        p = par[p];
    }
    tmp = cnt;
    if (p == -1) {
        par[tmp] = 0;
    } else if (len[ch[p][c]] == len[p] + 1) {
        par[tmp] = ch[p][c];
    } else {
        int t = ch[p][c];
        len[++cnt] = len[p] + 1;
        for (int i = 0; i < 26; i++) {
            ch[cnt][i] = ch[t][i];
        }
        par[cnt] = par[t];
        par[tmp] = par[t] = cnt;
        while (p != -1 && ch[p][c] == t) {
            ch[p][c] = cnt;
            p = par[p];
        }
    }

}

int t;
int mark[MAXN*2];
bool is_terminal[MAXN];

int main(){
    int now = 0;
    int cnt = 0;
    int tmp = 0;
    scanf("%s", s);
    t = strlen(s);
    init();
    for (int i = 0; i < t; i++) 
        extend(s[i] - 'a', ++now, cnt, tmp);
    for(int i = 0; i <= cnt; i++)
        if(len[i] == t) last = i;
    while(last){
        is_terminal[last] = 1;
        last = par[last];
    }
    for(int i = cnt; i >= 0; i--){
        mark[i] = is_terminal[i];
        for(int l = 0; l < 26; l++){
            if(ch[i][l]){
                mark[i] += mark[ch[i][l]];
            }
        }
    }
    
    now = 0;
    int ans = -1;
    for(int i = 0; i < t; i++){
        now = ch[now][s[i] - 'a'];
        //cout << now << " " << mark[now] << " " << is_terminal[now] << endl;
        if(mark[now] > 2 && is_terminal[now]){
            ans = i;
        } 
    }
    if(ans >= 0){
        s[ans+1] = '\0';
        printf("%s\n", s);
        return 0;
    }
    printf("Just a legend\n");
}
