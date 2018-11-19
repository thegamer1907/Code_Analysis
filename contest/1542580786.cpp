#include <bits/stdc++.h>
using namespace std;
int n,k,a[5],x;
map<int,int>mp;
bool check()
{
    if(mp[1] && (mp[2] || mp[4] ||mp[8] || mp[6] || mp[10] || mp[12] || mp[14]))
        return 1;
    if(mp[2] && (mp[4] || mp[8] || mp[5] || mp[9] || mp[12] || mp[13]))
        return 1;
    if(mp[4] && (mp[8]|| mp[3] || mp[9] || mp[10] || mp[11]))
        return 1;
    if(mp[8] && (mp[3] || mp[5] || mp[6] || mp[7]))
        return 1;
    if(mp[3] && mp[12] || (mp[5] && mp[10]) || (mp[9] && mp[6]))
        return 1;
    return 0;
}
bool check1()
{
    if(mp[0])
        return 1;
    if(mp[1] && (mp[2] || mp[4] || mp[6]))
        {return 1;}
    if(mp[2] && (mp[5] || mp[4]))
        {return 1;}
    if(mp[4] && (mp[3]))
        {return 1;}
    return 0;
}
int main()
{
    //freopen("","r",stdin);
    //freopen("","w",stdout);
     ios_base::sync_with_stdio(0);
	 cin.tie(0),cout.tie(0);
	 cin>>n>>k;
	 for(int i=0;i<n;i++)
     {
         for(int j=0;j<k;j++)
         {
             cin>>a[j];
         }
         int p=1,num=0;
         for(int j=k-1;j>=0;j--)
         {
             num+=(p*a[j]);
             p*=2;
         }
         mp[num]++;
     }
     if((k==1 && mp[0]) || (k==2 && (mp[0]||(mp[1] && mp[2]))))
     {
         cout<<"YES"<<endl;
         return 0;
     }
     if(k==3 && check1())
     {
         cout<<"YES"<<endl;
         return 0;
     }
     if(k==4 && (mp[0] || check()))
     {
         cout<<"YES"<<endl;
         return 0;
     }
     cout<<"NO"<<endl;


    return 0;
}
