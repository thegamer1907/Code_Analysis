#include <bits/stdc++.h>
using namespace std;

int main()
{
  // freopen("input.in","r",stdin);

    string str;

   while( cin>>str){
        int t;
        string val;
        cin>>t;
        int loc=0,loc2=0;
      //  cout<<t<<endl;
        for(int i=1; i<=t; i++)
        {
            cin>>val;
            if(str.compare(val)==0)
            {
                loc = 1;
                loc2  = 1;
            }
            if(val[1]==str[0])
            {
                loc =1 ;
            }
            if(val[0]==str[1])
            {
                loc2 = 1;
            }

        }
        if(loc && loc2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }


    }

