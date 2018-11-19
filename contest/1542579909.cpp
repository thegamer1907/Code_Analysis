#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    int i;
    int time[30]={0};//23
    memset(time, 0, sizeof(time));
    int h,s,m,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(h==12)h=0;
    if(t1==12) t1=0;
    if(t2==12) t2=0;
    if(m==0&&s==0)
    time[h*2]=1;
    else time[h*2+1]=1;
    if(m%5==0&&s==0)
    {
        time[(m/5)*2]=1;
    }
    else time[(m/5)*2+1]=1;
    if(s%5==0)
    {
        time[(s/5)*2]=1;
    }
    else time[(s/5)*2+1]=1;
    int flag=0;
    for(i=t1*2;i<=23;i++)
    {
        if(time[i]==1)
        {
            
   //         cout<<"now is"<<i<<endl;
            break;
        }
        
        if(i==t2*2)
        {
  //          printf("%d\n",i);
            flag=1;
        }
        if(i==23)
        
            i=-1;
    }
    for(i=t2*2;i<=23;i++)
    {
//        printf("<%d>",i);
        if(time[i]==1)
        {
            
   //         cout<<"now is"<<i<<endl;
            break;
        }
        
        if(i==(t1*2))
        {
            flag=1;
    //        printf("%d\n",i);
        }
        
        if(i==23)
            i=-1;
    }
 //   printf("t1=%d  t2=%d\n",t1,t2);
    
//    for(i=0;i<=23;i++)
//        printf("%03d|",i);
//    cout<<endl;
//    for(i=0;i<=23;i++)
//        printf("%03d|",time[i]);
    if(flag==1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}