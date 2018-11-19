/**
 *    author:  Moamen
 *    created: 5.10.2017 - 9.45 AM
**/
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) ((v).begin()), ((v).end())
#define clr(v,d ) memset(v, d, sizeof(v))
typedef long long ll;
int main()
{
   fast
   int n;
   string s[100],x;
   cin>>x;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>s[i];
   }
   for(int i=0;i<n;i++)
   for(int j=0;j<n;j++){
        string y=s[i]+s[j];
      if(y.find(x)!=-1)
        return cout<<"YES"<<endl,0;
   }
   cout<<"NO"<<endl;
    return 0;
}
