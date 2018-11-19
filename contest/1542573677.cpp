#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN=9223372036854775806;
const int ARR=3*1000*100+256;
const int MAXM=2147483647;
int b[20];
int main()
{
     int h,m,s,t1,t2;
     cin>>h>>m>>s>>t1>>t2;
     if(t2>t1)swap(t1,t2);
     b[h]++;
     if(m/5==0)m=60;
     if(s/5==0)s=60;
     b[m/5]++;
     b[s/5]++;
     int ans=0;
     for(int i=t2;;i++)
     {
         if(i==13)i=1;
         if(i==t1)break;
         ans+=b[i];
     }
    if(ans==3||ans==0)
     {
         cout<<"YES";
     }
     else cout<<"NO";
    return 0;
}
