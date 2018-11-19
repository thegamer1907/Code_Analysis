#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=100010;
const ll INF=1e18;
double d[5];
int main()
{
    ll h,m,s,t1,t2;
    while(cin>>h>>m>>s>>t1>>t2)
    {
        int fg=0;
       memset(d,0,sizeof d);
       h*=5;
       d[0]=h;
       d[0]+=m*0.1/30+s*0.1/72;
       if(d[0]>60)d[0]-=60;
       d[1]=m;
       d[1]+=(s/60.0);
       if(d[1]>60)d[1]-=60;
       d[2]=s;
       t1*=5;
       t2*=5;
       d[3]=t1;
       d[4]=t2;
       sort(d,d+5);
       //for(int i=0;i<5;i++)cout<<d[i]<<" ";
       //cout<<endl;
       int l1,l2;
       for(int i=0;i<5;i++)
       {
           if(d[i]==t1){
            l1=i;
           }
           if(d[i]==t2){
            l2=i;
           }
       }
       if((l1+1)%5==l2||(l2+1)%5==l1||l1==l2)fg=1;
       if(fg){
            cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
    }
    return 0;
}
