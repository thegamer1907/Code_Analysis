#include<bits/stdc++.h>
#define UP(i,l,h) for(int i=l;i<h;i++)
#define W(t) while(t)
#define MEM(a,b) memset(a,b,sizeof(a))
#define MAXN 100010
#define INF 0x3f3f3f3f
using namespace std;
char tar[10];
char now[10];
bool first[150],second[150];

int main(){
    MEM(first,false);
    MEM(second,false);
    scanf("%s",tar);
    int n;
    scanf("%d",&n);
    bool can=false;
    UP(i,0,n){
        scanf("%s",now);
        first[now[0]]=true;
        second[now[1]]=true;
        if(strcmp(now,tar)==0){
            can=true;
        }
    }
    if(can){
        puts("YES");
    }else if(second[tar[0]]&&first[tar[1]]){
        puts("YES");
    }else{
        puts("NO");
    }
}
