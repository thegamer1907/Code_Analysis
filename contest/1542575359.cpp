#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main(){
    int h, m, s, t1, t2;
    while(scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2)==5){
        if(t1 > t2) swap(t1, t2);
        int ms=m*60+s, hs=h*60*60+ms;
        int hs1=60*60*t1, hs2=60*60*t2, s1=5*t1, s2=5*t2;
        int ms1=s1*60, ms2=s2*60;
        // printf("%d %d %d %d %d %d\n",hs1,hs,hs2,ms1,ms,ms2);
        // printf("%d %d %d\n", ms1, s, ms2);
        if(hs>hs1&&hs<hs2 && ms>ms1&&ms<ms2 && s>s1&&s<s2){
            puts("YES");
        }
        else if((hs<hs1||hs>hs2) && (ms<ms1||ms>ms2) && (s<s1||s>s2)){
            puts("YES");
        }
        else {
            puts("NO");
        }
    }
    return 0;
}