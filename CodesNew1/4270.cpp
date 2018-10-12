#include<bits/stdc++.h>
using namespace std;
stack<string> st,out;
int main()
  {
    int n,lsi;
    string s,last,curr,bu;
    scanf("%d",&n );
    while(n--)
      {
        cin>>s;
        st.push(s);
      }
      last=st.top();
      st.pop();
      out.push(last);
      while(!st.empty())
        {
          bu="";
          curr=st.top();
          st.pop();
          lsi=last.size();
          if(last=="#"){out.push(last);continue;}
          // cout<<curr<<' '<<last<<endl;
          bool fl=0;
          for(int i=0,si=curr.size();i<si;i++)
            {
              if(fl)bu+=curr[i];
              else
                {
                  if(last[i]&&curr[i]==last[i]){bu+=curr[i];}
                  else if(last[i]&&curr[i]<last[i]){bu+=curr[i];fl=1;}
                  else break;
                }
            }
            last = bu;
            out.push(bu);
        }
        while(!out.empty())
          {
            cout<<out.top()<<endl;
            out.pop();
          }
  }
