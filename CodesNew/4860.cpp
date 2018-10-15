#include <bits/stdc++.h>
using namespace std;
int n;
int nus[200000+20];
string a,b;
int num[200000+20];
queue<char> D;
int check(int m)
{
    for(int  h = 0; h<m;h++)
    {
        nus[num[h]]=1;
    }
     for(int i =1;i<=n;i++)
     {
         char ks = D.front();
          if(a[i-1]==ks&&nus[i]==0)
          {
              D.pop();
          }
            if(D.size()==0)
              return 1;
     }
       if(D.size()==0)
         return 1;
       else
          return  0;
}

int main()
{
             cin>>a>>b;
                  n =a.size();
               for(int i =0;i<n;i++)
               {
                   scanf("%d",&num[i]);
               }
               int l =0;
                int h = n;
                 while(h-l>1)
                 {
                      memset(nus,0,sizeof(nus));
                     int m =(l+h)/2;
                         while(!D.empty())
                            D.pop();
                      for(int k = 0;k<b.size();k++)
                      {
                          D.push(b[k]);
                      }
                     if(check(m))
                     {
                         l=m;
                     }
                     else
                        h=m-1;
                 }
                            memset(nus,0,sizeof(nus));
                                while(!D.empty())
                            D.pop();
                     for(int k = 0;k<b.size();k++)
                      {
                          D.push(b[k]);
                      }
                  if(check(h))
                    cout<<h<<endl;
                  else
                    cout<<l<<endl;
               //  cout<<l<<endl;
}
