#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=1e3+10;
int a[MAXN];
int b[MAXN];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    sort(a+1,a+1+n);
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++)scanf("%d",&b[i]);
    sort(b+1,b+1+m);
    int nowa=1;
    int nowb=1;
    int ans=0;
    while(1){
        if(nowa>n||nowb>m)break;
        if(a[nowa]<=b[nowb]){
            if(abs(a[nowa]-b[nowb])<=1){
                ans++;
                nowb++;
            }
            nowa++;
        }else{
            if(abs(a[nowa]-b[nowb])<=1){
                ans++;
                nowa++;
            }
            nowb++;
        }
    }
    printf("%d",ans);
    return 0;
}
