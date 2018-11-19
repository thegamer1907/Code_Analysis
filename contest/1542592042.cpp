#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pair<long long,long long>
#define f first
#define s second
int main()
{
    ll n,t,i,j,k,l,m;
    string str,str2[110];
    cin>>str;
    cin>>n;
    bool flag=0;
    for (i=0;i<n;i++)
    {
        cin>>str2[i];
        if (str2[i].compare(str)==0)
            flag=1;
    }
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
          if (str2[i][1]==str[0] && str2[j][0]==str[1])
            flag=1;
    if (flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";


    return 0;
}
