#include<bits/stdc++.h>

using namespace std;

const int MAXN=100010;
int n, m, v[MAXN], dp[MAXN];
map<int, int> aux;

int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&v[i]);
        if(aux[v[i]]==0) aux[v[i]]=1;
        else  aux[v[i]]++;
    }
    dp[1]=aux.size();
    for(int i=2;i<=n;i++){
        aux[v[i-1]]--;
        if(aux[v[i-1]]==0) dp[i]=dp[i-1]-1;
        else dp[i]=dp[i-1];
    }
    for(int i=1;i<=m;i++){
        int l;
        scanf("%d",&l);
        printf("%d\n",dp[l]);
    }
    return 0;
}