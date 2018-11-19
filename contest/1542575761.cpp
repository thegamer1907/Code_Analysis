#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<cmath>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<time.h>
#include<bitset>
using namespace std;
#define mp make_pair
#define pb push_back
#define lson l,mid,pos<<1
#define rson mid+1,r,pos<<1|1
typedef long long ll;
const int maxm=1000+5;
const int maxn=205;
const int mod=1e9+7;
const int inf=0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3fLL;
const double eps=1e-8;
string pre[maxn],sub[maxn];
bitset<(1<<16)+1> cnt[maxn][17];
int ck[maxn][20];
///maxk 16
void get(string &t,int x)
{
    for (int i=1;i<=16;i++){
        int r=0;
        int tmp=0;
        if (ck[x][i]==(1<<i))continue;
        for (int j=0;j<=(int)t.size()-i;j++){
            for (;r-j<i;r++){
                tmp=(tmp<<1)|(t[r]-'0');
            }
            if (cnt[x][i][tmp]==0){
                ck[x][i]++;
                cnt[x][i][tmp]=1;
                if (ck[x][i]==(1<<i))break;
            }
            tmp-=(t[j]-'0')<<(i-1);
        }
    }
}
int main()
{
    int n,m;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        cin>>pre[i];
        sub[i]=pre[i];
    }
    for (int i=0;i<n;i++){
        get(pre[i],i);
    }
    for (int i=0;i<n;i++){
        if (pre[i].size()>16)
            pre[i]=pre[i].substr(0,16),
            sub[i]=sub[i].substr(sub[i].size()-16);
    }
    int a,b;
    scanf("%d",&m);
    for (int i=0;i<m;i++){
        scanf("%d%d",&a,&b);
        a--,b--;
        string c=sub[a]+pre[b];
        pre[n+i]=pre[a],sub[n+i]=sub[b];
        if (pre[n+i].size()<16)pre[n+i]=pre[a]+pre[b];
        if (sub[n+i].size()<16)sub[n+i]=sub[a]+sub[b];
        for (int j=1;j<=16;j++){
            for (int k=0;k<(1<<j);k++){
                cnt[n+i][j][k]=cnt[a][j][k]|cnt[b][j][k];
                if (cnt[n+i][j][k]==1)
                ck[n+i][j]++;
            }
        }
        get(c,n+i);
        if (pre[n+i].size()>16)
            pre[n+i]=pre[n+i].substr(0,16),
            sub[n+i]=sub[n+i].substr(sub[n+i].size()-16);
        int flag=0;
        for (int j=16;j>0;j--){
            if (ck[n+i][j]==(1<<j)){
                printf("%d\n",j);
                flag=1;
                break;
            }
        }
        flag?0:puts("0");
    }
    return 0;
}
