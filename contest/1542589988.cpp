#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    t1 = (t1 % 12) * 3600;
    t2 = (t2 % 12) * 3600;
    if(t1 > t2){
        int tmp = t1;
        t1 = t2;
        t2 = tmp;
    }
    int ss = 0, ee = 43199;
    int su[3] = {(h % 12) * 3600 + m * 60 + s, m * 720 + s * 12, s * 720};
    int cnt1 = 0, cnt2 = 0;
    for(int i=0;i<3;i++){
        if(t1 <= su[i] && su[i] <= t2) cnt1++;
        if(ss <= su[i] && su[i] <= t1) cnt2++;
        if(t2 <= su[i] && su[i] <= ee) cnt2++;
    }
    if(cnt1 == 3 || cnt2 == 3){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}
