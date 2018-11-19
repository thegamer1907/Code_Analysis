#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define PI acos(-1.0)

int main()
{
    int h,m,s;
    cin>>h>>m>>s;
    int t1,t2;
    cin>>t1>>t2;
    int r1,r2,r3;
    r1=(h%12)*3600+m*60+s;
    r2=m*720+s*12;
    r3=s*720;
    t1=t1*3600;
    t2=t2*3600;
    if(t1>t2)
        swap(t1,t2);
    //printf("%d %d %d %d %d\n",r1,r2,r3,t1,t2);
    int ff1=0,ff2=0;
    if(r1>t1&&r1<t2)ff1++;
    else if(r1==t1||r1==t2);
    else ff2++;
    if(r2>t1&&r2<t2)ff1++;
    else if(r2==t1||r2==t2);
    else ff2++;
    if(r3>t1&&r3<t2)ff1++;
    else if(r3==t1||r3==t2);
    else ff2++;
    //printf("%d\n",ff);
    if(ff1==0||ff2==0)
        printf("YES\n");
    else
        printf("NO\n");
}
