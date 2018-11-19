#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    int as = s+60*m+3600*h;
    as %= 43200;
    s = 720*as;
    s %= 43200;
    m = 12*as;
    m %= 43200;
    h = as;
    h %= 43200;
    t1 *= 3600;
    t2 *= 3600;
    t1 %= 43200;
    t2 %= 43200;
    if(t1 > t2) swap(t1,t2);
    for(int i = t1; i <= t2; i++){
        if(i == h || i == m || i == s){
            for(int j = t1; j >= 0; j--){
                if(j == h || j == m || j == s){
                    printf("NO");
                    return 0;
                }
            }
            for(int j = 43199; j >= t2; j--){
                if(j == h || j == m || j == s){
                    printf("NO");
                    return 0;
                }
            }
            printf("YES");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
