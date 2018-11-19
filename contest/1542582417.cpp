#include <iostream>
#include <iomanip>
#include <climits>
#include <stack>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <cassert>

#define FOR(i,n) for(int i=0,_n=n;i<_n;i++)
#define FORR(i,s,n) for(int i=s,_n=n;i<_n;i++)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pli pair<ll,int>
#define vi vector<int>
#define fs first
#define sec second

#define maxn 100005

using namespace std;
typedef long long ll;

const ll MOD = 1000000007LL;

int a[maxn][4];

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    FOR(i,n)FOR(j,k)scanf("%d",&a[i][j]);
    if(k==1){
        FOR(i,n)if(a[i][0]==0){printf("YES\n");return 0;}
        printf("NO\n");return 0;
    }
    if(k==2){
        bool ok=0;
        FOR(i,n)if(a[i][0]==0)ok=1;
        FOR(i,n)if(a[i][1]==0 && ok){printf("YES\n");return 0;}
        printf("NO\n");return 0; 
    }
    if(k==3){
        int poz=-1;
        FOR(i,n)if(a[i][0]+a[i][1]+a[i][2]==0){printf("YES\n");return 0;}
        FOR(i,n)if(a[i][0]+a[i][1]+a[i][2]==1)poz=i;
        if(poz==-1){printf("NO\n");return 0;}
        int ind;
        FOR(i,3)if(a[poz][i]==1)ind=i;
        FOR(i,n)if(a[i][ind]==0){printf("YES\n");return 0;}
        printf("NO\n");
        return 0;
    }
    int poz=-1;
    FOR(i,n)if(a[i][0]+a[i][1]+a[i][2]+a[i][3]==0){printf("YES\n");return 0;}
    FOR(i,n)if(a[i][0]+a[i][1]+a[i][2]+a[i][3]==1)poz=i;
    if(poz>-1){
        int ind;
        FOR(i,4)if(a[poz][i]==1)ind=i;
        FOR(i,n)if(a[i][ind]==0){printf("YES\n");return 0;}
    }
    FOR(i,4)FOR(j,4)FOR(c,4)FOR(l,4){
        if(i==j || i==c || i==l || j==c || j==l || c==l)continue;
        bool ok=0;
        FOR(b,n){
            if(a[b][i]==0 && a[b][j]==0)ok=1;
        }
        FOR(b,n)if(ok && a[b][c]==0 && a[b][l]==0){printf("YES\n"); return 0;}
    }
    printf("NO\n");
	return 0;
}
