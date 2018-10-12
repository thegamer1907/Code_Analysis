#include <bits/stdc++.h>
#define N 100007
using namespace std;
int n;
int main(){
    /*for(int cas=1;cas<=10;++cas){
    char infile[100],outfile[100];
    sprintf(infile,"%d.in",cas);
    sprintf(outfile,"%d.out",cas);
    freopen(infile,"r",stdin);
    freopen(outfile,"w",stdout);*/
    scanf("%d",&n);
    long long s=0,t=0;
    for(int i=1,a;i<=n;++i){
        scanf("%d",&a);
        s+=a,t=max(t,1LL*a);
    }
    if(s%(n-1))s/=n-1,++s;
    else s/=n-1;
    cout<<max(s,t);
    //}
}
