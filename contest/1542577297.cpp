#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;


int main()
{
     int n,k;
     cin>>n>>k;
     int i=0;
     //int ar4[10][4];
     if(k==1)
     {
        int flag=0;
        for(int i=0;i<n;i++)
           {
               int a;
               cin>>a;
               if(a==0)
               {
                   flag=1;
               }
           }
          if(flag==1)
            cout<<"YES";
          else
             cout<<"NO";
          return 0;
     }
     int arr[n][k];
     for(int i=0;i<n;i++)
         for(int j=0;j<k;j++)
              cin>>arr[i][j];
      //set<vector<int>> s;
      if(k==2)
      {
            bool visited[2][2];
            memset(visited,0,sizeof(visited));
            for(int i=0;i<n;i++)
            {
                   if(visited[arr[i][0]][arr[i][1]]==0)
                   {
                          for(int j=0;j<n;j++)
                          {    int sum=0;
                               for(int l=0;l<k;l++)
                               {
                                    sum+=arr[i][l]&arr[j][l];
                               } 
                               if(sum==0)
                                {
                                    cout<<"YES";
                                    return 0;
                                }  
                          }
                        visited[arr[i][0]][arr[i][1]]=1;
                   }
            }
            cout<<"NO";
            return 0;
      }

      if(k==3)
      {
            bool visited[2][2][2];
            memset(visited,0,sizeof(visited));
            for(int i=0;i<n;i++)
            {
                   if(visited[arr[i][0]][arr[i][1]][arr[i][2]]==0)
                   {
                          for(int j=0;j<n;j++)
                          {    int sum=0;
                               for(int l=0;l<k;l++)
                               {
                                    sum+=arr[i][l]&arr[j][l];
                               } 
                               if(sum==0)
                                {
                                    cout<<"YES";
                                    return 0;
                                }  
                          }
                        visited[arr[i][0]][arr[i][1]][arr[i][2]]=1;
                   }
            }
            cout<<"NO";
            return 0;
      }
      if(k==4)
      {
            bool visited[2][2][2][2];
            memset(visited,0,sizeof(visited));
            for(int i=0;i<n;i++)
            {
                   if(visited[arr[i][0]][arr[i][1]][arr[i][2]][arr[i][3]]==0)
                   {
                          for(int j=0;j<n;j++)
                          {    int sum=0;
                               for(int l=0;l<k;l++)
                               {
                                    sum+=arr[i][l]&arr[j][l];
                               } 
                               if(sum==0)
                                {
                                    cout<<"YES";
                                    return 0;
                                }  
                          }
                        visited[arr[i][0]][arr[i][1]][arr[i][2]][arr[i][3]]=1;
                   }
            }
            cout<<"NO";
            return 0;
      }
    return 0;
}