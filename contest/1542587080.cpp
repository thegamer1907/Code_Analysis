#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
typedef long long ll;

int h,m,s,t1,t2;

int side(double a, double b, double t){
    if(a>b)return side(b,a,t);
    if(a<=t&&t<b){
//         printf("for %g %g %g it's 1\n",a,b,t);
        return 1;
    }else{
//         printf("for %g %g %g it's 2\n",a,b,t);
        return 2;
    }
}

int clip(int a){if(a>=60)return a-60;else return a;}
int clip2(int a){if(a>=12)return a-12;else return a;}
int main(){
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    int countA = 0, countB = 0;
    if(side(clip2(t1),clip2(t2),clip2(h))==1)countA++;else{countB++;}
    if(side(clip(t1*5),clip(t2*5),clip(m))==1)countA++;else{countB++;}
    if(side(clip(t1*5),clip(t2*5),clip(s))==1)countA++;else{countB++;}
    if(countA>0&&countB>0)printf("NO\n");
    else{printf("YES\n");}
    return 0;
}
