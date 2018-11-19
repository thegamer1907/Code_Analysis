#include<bits/stdc++.h>
using namespace std;

string s,s2,ss[1000];
long long int ar[300005],b[300005];
pair<long long int , int> pa[300005];

bool cheak(string s1)
{
    int i,j;
    for( i=0;i<s1.size();i++)
    {
        if(s[0]==s1[i])
        {
            for( j=0;j<s.size();j++)
            {
                if(s[j]==s1[i+j])
                    continue;
                else break;
            }
            if(s.size()==j)
                return true;
        }
    }
    return false;
}

int main()

{
   long long int i,j=0,k,n,m,l=0,w,x=0,ca=1,ans=0;

   cin>>s>>n;
   for(i=0;i<n;i++)
   {
       cin>>ss[i];
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {

           s2=ss[i]+ss[j];
         
           if(cheak(s2))
           {
               cout<<"YES"<<endl;
               return 0;
           }
       }
   }
   cout<<"NO"<<endl;

    return 0;
}
