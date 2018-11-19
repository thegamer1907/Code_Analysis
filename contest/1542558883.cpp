#include <bits/stdc++.h>
#define M 1000010
#define pb push_back
#define mp make_pair
#define st first
#define nd second
using namespace std;
map<int,bool> m;
int n,k,x,t[M];

int main(){
    scanf("%d%d",&n,&k);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            scanf("%d",&x);
            if(x){
                t[i]+=(1<<(j-1));
            }
        }
        m[t[i]]=true;
    }
    for(int i=1; i<=n; i++){
        for(int j=0; j<(1<<k); j++){
            if(m[j]&&(j&(t[i]))==0){
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}
