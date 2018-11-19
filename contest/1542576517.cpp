#include<bits/stdc++.h>
using namespace std;

int main()
{
    double t[3];
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(h==12)
        h=0;
    if(t1==12)
        t1=0;
    if(t2==12)
        t2=0;
    m+=s/60.0;
    h=h+m/60.0;

    m=m/5.0;
    s=s/5.0;
    t[0]=h,t[1]=m,t[2]=s;
    sort(t,t+3);
   // cout<<t[2]<<endl;
    if(t1>=t[0]&&t1<=t[1]&&t2>=t[0]&&t2<=t[1])
        printf("YES\n");
    else if(t1>=t[1]&&t1<=t[2]&&t2>=t[1]&&t2<=t[2])
        printf("YES\n");
    else if((t1>=t[2]&&t1<=t[0]+12&&t2>=t[2]&&t2<=t[0]+12)&&t[0]==0)
        printf("YES\n");
    else if(t[0]==0&&t1==0&&(t2>=t[2]&&t2<=t[0]+12))
           printf("YES\n");
    else if(t[0]==0&&t2==0&&(t1>=t[2]&&t1<=t[0]+12))
        printf("YES\n");
    else if(((t1>=t[2]&&t1<=12.0)||(t1>=0&&t1<=t[0]))&&((t2>=t[2]&&t2<=12.0)||(t2>=0&&t2<=t[0]))&&(t[0]>0))
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
