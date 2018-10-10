#include<bits/stdc++.h>
using namespace std;
queue<int>q;
string s;
int main()
{
   int n,m;
   int ans;
   int x;
   ios::sync_with_stdio(false);
   while(cin>>n>>m)
   {
       cin>>s;
     while(!q.empty())
        q.pop();
       x=ans=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='b')
            q.push(i);
           if(q.size()>m)
           {
               x=q.front()+1;
               q.pop();
   //  cout<<x<<endl;
           }
            ans=max(ans,i-x+1);
       }
       x=0;
       while(!q.empty())
        q.pop();
       for(int i=0;i<n;i++)
       {
           if(s[i]=='a')
            q.push(i);
           if(q.size()>m)
           {
               x=q.front()+1;
               q.pop();
        //       cout<<x<<endl;
           }
            ans=max(ans,i-x+1);
       }
       cout<<ans<<endl;

   }
}
