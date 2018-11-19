#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<ctime>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<queue>
#define ll __int64

const int MAXN=1e5+7;
const int MOD=1e9+7;

using namespace std;

//int n,m;
int a[MAXN];

int n,k;
int ed[MAXN][5];

int used[MAXN];

int main(){
    memset(a,0,sizeof(a));
    memset(used,0,sizeof(used));
    cin>>n>>k;
    int all=1<<(k+1)-1;
    for(int i=0;i<n;i++){
        int tmp=0;
        for(int j=0;j<k;j++){
            scanf("%d",&ed[i][j]);
            tmp+=ed[i][j]*pow(2,j);
        }
        used[tmp]=1;
    }
    if(used[0]==1){cout<<"YES"<<endl;return 0;}
    for(int i=0;i<=all;i++){
        for(int j=i+1;j<=all;j++){
            if((i&j)!=0)continue;
            if(used[i]&&used[j]){
                //cout<<i<<j<<endl;
                cout<<"YES"<<endl;return 0;}
        }
    }

    cout<<"NO"<<endl;
    return 0;
}
