#include <bits/stdc++.h>

using namespace std;

int main()
{
     string s,t;
     cin>>s;
     int n;
     cin>>n;
     vector<string> qn(n);
     vector<int> fir,sec;
     set<int> st;
     int found=0;
     for(int i=0;i<=n-1;i++)
       {
        cin>>qn[i];
        if(qn[i]==s)
            found=1;
        if(qn[i][0]==s[1])
           {
               sec.push_back(i);

           }
        if(qn[i][1]==s[0])
            {fir.push_back(i);

            }
       }
       if(found==1)
        cout<<"YES";
        else if(fir.size()>=1&&sec.size()>=1)
        {
            cout<<"YES";
        }
         else
            cout<<"NO";
    return 0;
}
