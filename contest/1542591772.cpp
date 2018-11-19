#include <bits/stdc++.h>
using namespace std;
int n;
string s,an[101];
bool check(string l)
{
    if(l.find(s)!= std::string::npos)
        return 1;
    return 0;
}
int main()
{
    //freopen("","r",stdin);
    //freopen("","w",stdout);
     ios_base::sync_with_stdio(0);
	 cin.tie(0),cout.tie(0);
	 cin>>s;
	 cin>>n;
	 for(int i=0;i<n;i++)
     {
         cin>>an[i];
     }
     for(int i=0;i<n;i++)
     {
         string ss="";
         for(int j=0;j<n;j++)
         {
            ss=an[i]+an[j];
         if(check(ss))
         {
             cout<<"YES"<<endl;
             return 0;
         }
         }
     }
     cout<<"NO"<<endl;


    return 0;
}
