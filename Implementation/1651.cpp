#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,d,i,j,e;

  string s,u;
  vector<string>t;
  while(cin>>s)
  {
      b=0;
      c=0;


      d=0;
      e=0;
    for(a=0;a<s.size();a++)
    {
        if(s[a]=='0')
        {
            d++;
            e=0;
            if(d>=7)
            {
                b=1;
            }

        }
        else
        {

            e++;
            d=0;
            if(e>=7)
            {
                b=1;
            }

        }

    }
    if(b==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }



  }




    return 0;
}
