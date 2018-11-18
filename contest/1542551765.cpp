#include <bits/stdc++.h>
using namespace std;
int vis[70];
int h,s,t,t1,t2;
int main()
{   while(cin>>h>>s>>t>>t1>>t2){
          memset(vis,0,sizeof(vis));
          if(h==0) {vis[0]+=1;}
          else vis[(h*5)%60]=true;
          vis[s%60]+=1;
          vis[t%60]+=1;
          if(t1>t2){
            swap(t1,t2);
          }
          //if(t2<t1) swap(t1,t2);
          bool flag=false;

          t1=(t1*5)%60;;
          t2=(t2*5)%60;;
          int tim=(t1)%60;
          int sum=0;
          while(1){

                if(tim==t2) {flag=true;break;}
              if(vis[tim]) {
                //cout<<tim<<endl;
                sum+=vis[tim];
              }

              tim=(tim+1)%60;
          }
          //cout<<sum<<endl;
          if(sum==0||sum==3)
            puts("yes");
          else
            puts("no");
    }
    return 0;
}
