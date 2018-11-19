#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int a[20];
int n,k;
bool ok;
int main(){
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        int x=0;
        for(int j=0;j<k;j++){
            x<<=1;
            int y;
            scanf("%d",&y);
            x+=y;
        }
        a[x]++;
    }
    ok=false;
    for(int i=0;i<(1<<k)&&!ok;i++){
        if(a[i]>0){
            for(int j=0;j<(1<<k);j++){
                if((i&j)==0&&a[j]>0) ok=true;
            }
        }
    }
    if(ok)
        puts("YES");
    else puts("NO");
}
