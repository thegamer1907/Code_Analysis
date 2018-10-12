#include <bits/stdc++.h>
using namespace std;
stack<string>st,out;
int main()

{
    int n;
string s,last,curr,bu;

cin>>n;
    while(n--)
    {
        cin>>s;
        st.push(s);

    }
    last =st.top();
    st.pop();
    out.push(last);
    while(!st.empty())
    {
    bu="";
        curr=st.top();
        st.pop();
         bool flag =0;
        for(int i=0,si=curr.size();i<si;++i){
            if(flag)
        {bu+=curr[i];}
        else {
        if(last[i]&&last[i]==curr[i])
         {bu+=curr[i];}
          else if(last[i]&&last[i]>curr[i])
                 {
                     bu+=curr[i];
                 flag=1;
                 }

                 else

                    break;
        }
        }
        last=bu;
        out.push(bu);

    }
    while(!out.empty())
    {
        cout<<out.top()<<endl;
        out.pop();

    }
    return 0;
}
