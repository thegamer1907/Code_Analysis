#include<bits/stdc++.h>
using namespace std;
char s[3],t[3];
int ma[30][30];
set<int> a,b;
int n;
int main()
{
    //freopen("1.in","r",stdin);
   scanf("%s",s);
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%s",t);
       ma[t[0]-'a'][t[1]-'a']=1;
       a.insert(t[0]-'a');
       b.insert(t[1]-'a');
   }
   if( ma[s[0]-'a'][s[1]-'a']==1||(b.count(s[0]-'a')&&a.count(s[1]-'a')))
    printf("YES");
   else
    printf("NO");
}
