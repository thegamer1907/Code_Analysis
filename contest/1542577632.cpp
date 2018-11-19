#include <bits/stdc++.h>
using namespace std;
int n,k,a[100001][5],x[5],y[5],dem[20];
bool kt[20][20],kq;
void xuly() {
    int s=0;
    int t=0;
    for (int i=1;i<=k;i++) s+=pow(2,i-1)*x[i];
    for (int i=1;i<=k;i++) t+=pow(2,i-1)*y[i];
    kt[s][t]=true;
   // cout <<s<<' '<<t<<"\n";
}
void thu2(int i) {
    if (x[i]>0)
        if (i==k) xuly(); else thu2(i+1); else
    for (int j=0;j<=1;j++) {
        y[i]=j;
        if (i==k) xuly(); else thu2(i+1);
    }
}
void thu1(int i) {
    for (int j=0;j<=1;j++) {
        x[i]=j;
        if (i==k) {
                memset(y,0,sizeof(y));
                thu2(1);
        }
        else thu1(i+1);
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >>n>>k;
    thu1(1);
    for (int i=1;i<=n;i++)
        for (int j=1;j<=k;j++) cin >>a[i][j];
    for (int i=1;i<=n;i++) {
        int s=0;
        for (int j=1;j<=k;j++) s+=pow(2,j-1)*a[i][j];
        dem[s]++;
    }
    for (int i=0;i<=20;i++)
        for (int j=0;j<=20;j++)
            if (kt[i][j]&&dem[i]>0&&dem[j]>0) kq=true;
    if (kq) cout <<"YES"; else cout<<"NO";
    return 0;
}
