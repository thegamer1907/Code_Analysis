#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <sstream>
#include <vector>
#define PI acos(-1.0)
#define N 111111
#define M 1000000007
#define inf 2e9
#define eps 1e-8
#define dazhi 2147483647
using namespace std;

typedef long long ll;


/****************************************/
int gg[100];
int main()
{
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    int flag=s;
    gg[s/5*2+min(1,s%5)]=1;
    if(flag)gg[m/5*2+1]=1;
    else{
        gg[m/5*2+min(1,m%5)]=1;
        flag=m/5+m%5;
    }
    h=h%12;
    if(flag)gg[h*2+1]=1;
    else gg[h*2]=1;
    //for(int i=0;i<=24;i++)
    //    if(gg[i])printf("%d  **\n",i);
    if(t2<t1)swap(t2,t1);
    flag=1;
    for(int i=t1*2;i<=t2*2;i++){
        if(gg[i]){
            flag=0;break;
        }
    }
    if(flag){
        puts("YES");return 0;
    }
    flag=1;
    for(int i=t2*2;i<=24;i++){
        if(gg[i]){
            flag=0;break;
        }
    }
    for(int i=0;i<=t1*2;i++){
        if(gg[i]){
            flag=0;break;
        }
    }
    if(flag){
        puts("YES");return 0;
    }
    puts("NO");
}
