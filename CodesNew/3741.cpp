#include<cstdio>
using namespace std;
int n,a,sum,mx,m;
int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;++i){
        scanf("%d",&a);
        if(a>mx)mx=a;
        sum+=a;
    }
    printf("%d %d",(mx>(sum+m-1)/n+1)?mx:(sum+m-1)/n+1,mx+m);
}