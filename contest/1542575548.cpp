#include <bits/stdc++.h>
#define re return
#define ll long long
#define pb push_back
#define pi 3.1415926536
using namespace std;
int n;
string s,sss,s1;
vector<string>ss;
int main()
{
    cin>>s>>n;
    for(int i=0;i<n;++i){
        cin>>sss;
        ss.push_back(sss);
    }
    
    for (int i=0;i<ss.size();++i){
        sss=ss[i];
        if (sss==s){
       cout<<"YES";
            re 0; 
    }
        for (int j=0;j<ss.size();j++){
          s1=ss[j];
          if(sss[1]==s[0]&&s1[0]==s[1]){
            cout<<"YES";
            re 0;
          }
        }
    }

     cout<<"NO";

    return 0;
}