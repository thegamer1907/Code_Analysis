#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<string.h>
#include<set>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<cmath>
typedef long long ll;
typedef unsigned long long LL;
using namespace std;
const double PI=acos(-1.0);
const double eps=0.0000000001;
const int N=500000+100;
const int INF=0x3f3f3f3f;
int vis[N];
int main()
{
    int h, m, s, t1, t2;
    while(scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2)!=EOF){
        memset(vis,0,sizeof(vis));
        int hh=h*2;
        if(m||s)++hh;
        hh%=24;
        int mm=m/5*2;
        if(m%5!=0)++mm;
        if(m%5==0&&s)++mm;
        int ss=s/5*2;
        if(s%5!=0)++ss;
        vis[hh]=vis[mm]=vis[ss]=1;
        int flag1=1,flag2=1;
        if(t1>t2)swap(t1, t2);
        for(int i=2*t1;i<=2*t2;i++)
        if(vis[i])flag1=0;
        for(int i=2*t2;i<=2*t1+24;i++)
        if(vis[i%24])flag2=0;
        if(flag1||flag2) puts("YES");
        else puts("NO");
    }
}









/*
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<string.h>
#include<set>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<cmath>
typedef long long ll;
typedef unsigned long long LL;
using namespace std;
const double PI=acos(-1.0);
const double eps=0.0000000001;
const int N=500000+100;
const int INF=0x3f3f3f3f;
string a;
string b[1005];
int main(){
    cin>>a;
    char c1=a[0],c2=a[1];
    int n;
    scanf("%d",&n);
    int flag=0;
    for(int i=1;i<=n;i++){
        cin>>b[i];
        if(c1==b[i][0]&&c2==b[i][1])flag=1;
        if(c1==b[i][1]&&c2==b[i][0])flag=1;
    }
    int t1=0;
    int t2=0;
    for(int i=1;i<=n;i++){
        if(c1==b[i][1])t1=1;
        if(c2==b[i][0])t2=1;
    }
    if(flag||(t1&&t2))cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
*/
