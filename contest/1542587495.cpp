#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN=9223372036854775806;
const int ARR=3*1000*100+256;
const int MAXM=2147483647;
bool b[1005];
int main()
{

     string s;
     cin>>s;
     int n;
     cin>>n;
     int l=0,r=0;
     for(int i=1;i<=n;i++)
     {
         string k;
         cin>>k;
         if(k==s)
         {
             l++;
             r++;
         }
         if(k[0]==s[1])r++;
         if(k[1]==s[0])l++;
     }
     if(l!=0&&r!=0)
     {
         cout<<"YES";
     }
     else
     {
         cout<<"NO";
     }
     return 0;
}
