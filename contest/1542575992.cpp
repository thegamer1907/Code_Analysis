#include <bits/stdc++.h>
using namespace std;
int n,k,a[5];
map<int,int>mp;
vector<int>vec;
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
         if(!mp[num])
            vec.push_back(num);
         mp[num]++;
     }
     sort(vec.begin(),vec.end());
     if(!vec[0])
     {
         cout<<"YES"<<endl;
         return 0;
     }
     for(int i=0;i<vec.size();i++)
     {
         for(int j=0;j<vec.size();j++)
         {
             if(i==j)
                continue;
             if(!(vec[i]&vec[j]))
             {
                  cout<<"YES"<<endl;
                  return 0;
             }
         }
     }
     cout<<"NO"<<endl;



    return 0;
}
