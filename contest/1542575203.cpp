#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<char> l ,r;
    vector<string > vec;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        vec.push_back(str);

        l.push_back(str[0]);
        r.push_back(str[1]);

    }
    for(int i=0;i<n;i++)
    {
        if(vec[i]==s)
        {
            cout<<"YES";
              return 0;
        }
    }

     for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            string  str ="";
          str+= r[i];
          str+=l[j];
          if(str==s)
          {
              cout<<"YES";
              return 0;
          }
        }
    }
    cout<<"NO";






}
