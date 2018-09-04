#include <bits/stdc++.h>
using namespace std;
vector<int>vec[100005],dp[100005];
bool cmp(int a,int b){
    return a>b;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        int a;
        scanf("%d",&a);
        vec[i].push_back(a);
    }
    for(int i=0;i<m;i++){
        dp[0].push_back(1);
        for(int j=1;j<n;j++){
            dp[j].push_back(1);
            if(vec[j][i]>=vec[j-1][i])dp[j][i]+=dp[j-1][i];
        }
    }
    for(int i=0;i<n;i++)
        sort(dp[i].begin(),dp[i].end(),cmp);
    int k;
    scanf("%d",&k);
    while(k--){
        int l,r;
        scanf("%d%d",&l,&r);
        if(dp[r-1][0]+l-1>=r){
            printf("Yes\n");
        }
        else printf("No\n");
    }
    return 0;
}
