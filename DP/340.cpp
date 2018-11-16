#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a<b?b:a)
#define abs(x) (x<0?(-x):x)
#define F(i,L,R) for (int i = L; i < R; i++)
#define FE(i,L,R) for (int i = L; i <= R; i++)
#define RF(i,L,R) for (int i = L; i > R; i--)
#define RFE(i,L,R) for (int i = L; i >= R; i--)
#define getI(a) scanf("%d", &a)
#define getII(a,b) scanf("%d%d", &a, &b)
#define getIII(a,b,c) scanf("%d%d%d", &a, &b, &c)
#define VgetI(n) int (n); scanf("%d",&(n))
#define VgetII(n,m) int (n),(m); scanf("%d %d",&(n),&(m))
#define VgetIII(n,m,k) int (n),(m),(k); scanf("%d %d %d",&(n),&(m),&(k))
#define ll long long
#define INF 1000000000000000005
#define nINF -2000000000
#define MOD 1e9+7
#define PI 3.1415926535897932384626
bool cmp(int a,int b){
    return a<b;
}
int main(){
    int n;
    while(~getI(n)){
        int a[n];
        F(i,0,n) getI(a[i]);
        VgetI(m);
        int b[m];
        F(i,0,m) getI(b[i]);
        sort(a,a+n,cmp);
        sort(b,b+m,cmp);
        int ptrA=0,ptrB=0,ans=0;
        while(1){
            if(ptrA==n||ptrB==m) break;
            int diff=a[ptrA]-b[ptrB];
            if(abs(diff)<=1) ptrA++,ptrB++,ans++;
            else if(a[ptrA]<b[ptrB]) ptrA++;
            else ptrB++;
        }
        printf("%d\n",ans);
    }
}