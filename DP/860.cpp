#include <bits/stdc++.h>
using namespace std;

int n;
int a[105],dp[105][105];
int get(int i, int j){
    int hm=0;

    for (int x=i; x<=j; x++){
        a[x]= a[x]==0?1:0;
    }
    for (int x=0; x<105; x++){
        if (a[x]==1) hm++;
    }
    for (int x=i; x<=j; x++){
        a[x]= a[x]==0?1:0;
    }
    return hm;
}
int f(int x, int y){
    if (x>=n || y<0 || x>y) return 0;
    int &ret = dp[x][y];

    if (ret!=-1) return ret;

    ret = get(x,y);
    for (int i=x; i<n; i++){
        ret = max (ret,f(i+1,y));
        ret = max (ret,f(i,y-1));
    }
    return ret;
}
int main(){
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    memset(dp,-1,sizeof dp);
    cout << f(0,n-1) << endl;
}
