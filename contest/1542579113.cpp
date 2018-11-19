#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
const int MOD=1e9+7;

int h,m,s;
int t1,t2;

int main()
{
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    int m_tmp=m;
    if (h==12) h=0;
    m=m*60*12+s;
    h=h*3600+m_tmp*60+s;
    s=s*60*12;
    //cout<<h<<' '<<m<<' '<<s<<endl;
    if (t1==12) t1=0;
    if (t2==12) t2=0;
    t1=t1*3600;
    t2=t2*3600;
    bool flag=false;
    int t1_tmp=t1;
    int t2_tmp=t2;
    while(true) {
        if (t1_tmp==t2_tmp) {
            flag=true;
           // cout<<1<<endl;
            break;
        }
        if (t1_tmp==h||t1_tmp==m||t1_tmp==s) break;
        t1_tmp++;
        if (t1_tmp==43200) t1_tmp=0;
    }
    t1_tmp=t1;t2_tmp=t2;
    while(true) {
        if (t1_tmp==t2_tmp) {
            flag=true;
            //cout<<2<<endl;
            break;
        }
        if (t1_tmp==h||t1_tmp==m||t1_tmp==s) break;
        t1_tmp--;
        if (t1_tmp<0) t1_tmp=43199;
    }
    t1_tmp=t1;t2_tmp=t2;
    while(true) {
        if (t2_tmp==t1_tmp) {
            flag=true;
            //cout<<3<<endl;
            break;
        }
        if (t2_tmp==h||t2_tmp==m||t2_tmp==s) break;
        t2_tmp++;
        if (t2_tmp==43200) t2_tmp=0;
    }
    t1_tmp=t1;t2_tmp=t2;
    while(true) {
        if (t2_tmp==t1_tmp) {
            flag=true;
           // cout<<4<<endl;
            break;
        }
        if (t2_tmp==h||t2_tmp==m||t2_tmp==s) break;
        t2_tmp--;
        if (t2_tmp<0) t2_tmp=43199;
    }
    if (flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}
