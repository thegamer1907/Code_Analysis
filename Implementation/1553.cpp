#include<iostream>
#include<cstring>
using namespace std;
int main()
{        

       string s;
       cin>>s;
       int p=0,q=0;
       int l=s.size();
       for(int i=0;i<l;i++)
       {          
                if(s[i]=='1')
                {
                         p++;
                         if(p>=7)
                         break;
                }
                else
                p=0;
                if(s[i]=='0')
                {
                         q++;
                         if(q>=7)
                         break;
                }
                else
                q=0;
       }
       if(p>=7||q>=7)
       cout<<"YES";
       else
       cout<<"NO";
                
                
        return 0;
}
       

