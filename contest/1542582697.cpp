#include<bits/stdc++.h>
using namespace std;
int main()
{
     string st1, st2[107];
     int num,fst=0,snd=0,ans=0;
     cin>>st1;
     scanf("%d",&num);

     for(int i=0;i<num;i++)
     {
          cin>>st2[i];
     }
     for(int i=0;i<num;i++){
          if(st2[i]==st1)
          {
               printf("YES\n");
               ans=1;
               break;
          }
          else {
              if( st2[i][1]==st1[0])
               {
                    fst=1;
               }
               if(st2[i][0]==st1[1])
               {
                    snd=1;
               }
          }

     }
     if(ans==0 )
     {
          if(fst==1 && snd==1)
          {
               printf("YES\n");
          }
          else
               printf("NO\n");
     }
}
