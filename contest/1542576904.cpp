#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>
#include<utility>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;
int n,temp,ans,ans1,pok;   string s;
int main()
{

    cin>>s;
    cin>>n;
    for (int i=1;i<=n;i++){
        string str;
        cin>>str;
       if (str[0]==s[0]&&str[1]==s[1])pok=1;
       if (str[1]==s[0])ans++;
       if (str[0]==s[1])ans1++;
    }
if (ans>=1&&ans1>=1||pok){cout<<"YES"<<endl;return 0;}

cout<<"NO"<<endl;
return 0;
}
