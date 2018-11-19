#include <bits/stdc++.h>
using namespace std;

const int mx = 18;

char chk[201][524288];
int ff[201][20];
int bb[201][20];
char str[105];
int ll[201];
int until[201];
int ans[201];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s", str);
        int len = (int)strlen(str);
        ll[i] = min(len, mx);
        for(int j=0;j<len;j++){
            int cnt = 0;
            for(int k=j;k<len;k++){
                if(k-j == mx) break;
                cnt = cnt * 2 + (str[k] - '0');
                chk[i][cnt + (1 << (k-j+1)) - 2] = 1;
            }
        }
        ans[i] = 1;
        for(int j=0;;j++){
            if(chk[i][j] == 0) break;
            until[i] = j+1;
            if(until[i] == (1 << (ans[i]+1)) - 2){
                ans[i]++;
            }
        }
        if(len >= mx){
            for(int j=0;j<mx;j++){
                ff[i][j] = (str[j] - '0');
            }
            for(int j=len-mx;j<len;j++){
                bb[i][j - (len-mx)] = (str[j] - '0');
            }
        }else{
            for(int j=0;j<len;j++){
                ff[i][j] = (str[j] - '0');
                bb[i][j] = (str[j] - '0');
            }
        }
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        a--;b--;
        for(int j=0;j<(1 << (mx+1)-2);j++){
            chk[n+i][j] = chk[a][j] | chk[b][j];
        }
        /*
        printf("DEBUG%d %d %d %d\n", until[a], ll[a], until[b], ll[b]);
        for(int i=0;i<ll[a];i++){
            printf("%d", ff[a][i]);
        }
        printf("\n");
        for(int i=0;i<ll[a];i++){
            printf("%d", bb[a][i]);
        }
        printf("\n");
        for(int i=0;i<ll[b];i++){
            printf("%d", ff[b][i]);
        }
        printf("\n");
        for(int i=0;i<ll[b];i++){
            printf("%d", bb[b][i]);
        }
        printf("\n");
        */
        until[n+i] = max(until[a], until[b]);
        ans[n+i] = max(ans[a], ans[b]);
        for(int j=0;j<ll[a];j++){
            int cnt = 0;
            for(int k=j;k<ll[a];k++){
                cnt = cnt * 2 + bb[a][k];
            }
            for(int k=0;k<ll[b];k++){
                if(k-j+ll[a] >= mx) break;
                cnt = cnt * 2 + ff[b][k];
                //printf("DEBUG%d\n", cnt + (1 << (k-j+ll[a]+1)) - 2);
                chk[n+i][cnt + (1 << (k-j+ll[a]+1)) - 2] = 1;
            }
        }
        //return 0;
        for(;;){
            if(chk[n+i][until[n+i]] == 0) break;
            until[n+i]++;
            if(until[n+i] == (1 << (ans[n+i] + 1)) - 2){
                ans[n+i]++;
            }
        }
        ll[n+i] = min(ll[a] + ll[b], mx);
        for(int j=0;j<ll[n+i];j++){
            if(j < ll[a]) ff[n+i][j] = ff[a][j];
            else ff[n+i][j] = ff[b][j-ll[a]];
        }
        for(int j=0;j<ll[n+i];j++){
            if(j < ll[n+i] - ll[b]) bb[n+i][j] = bb[a][ll[a] + j - (ll[n+i] - ll[b])];
            else bb[n+i][j] = bb[b][j-(ll[n+i] - ll[b])];
        }
        printf("%d\n",ans[n+i] - 1);
    }
}
