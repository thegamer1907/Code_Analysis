#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int a[43200];

int main()
{
    int h,m,s,t1,t2;
    while(cin>>h>>m>>s>>t1>>t2)
    {
        memset(a,0,sizeof(a));
        a[720*s]=1;
        a[720*m+s]=1;
        a[(3600*h+60*m+s)%43200]=1;
        bool ok=false;
        int st=t1*3600%43200,ed=t2*3600%43200;
        for(int i=1;i<=43200;i++)
        {
            if(a[(st+i)%43200]==1) break;
            if((st+i)%43200==ed) {ok=true;break;}
        }
        for(int i=1;i<=43200;i++)
        {
            if(a[(st-i+43200)%43200]==1) break;
            if((st-i+43200)%43200==ed) {ok=true;break;}
        }
        if(ok) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
