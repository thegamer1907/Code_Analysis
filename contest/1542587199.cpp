#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    int ok=2;
    for(int i=t1;i!=t2;i=i%12+1){
        if(i==t2){
            break;
        }
        if(s/5==i%12||m/5==i%12||h==i){
            ok--;
            break;
        }
    }
    for(int i=t2;i!=t1;i=i%12+1){
        if(i==t1){
            break;
        }
        if(s/5==i%12||m/5==i%12||h==i){
            ok--;
            break;
        }
    }
    printf(ok?"YES\n":"NO\n");
    return 0;
}
