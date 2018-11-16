#include <iostream>
#include <string>

using namespace std;

int main()
{
    int counter = 1;
    bool dang =0;
    string s ;
    cin>>s ;
    int z=s.size();
    for(int i=1 ; i<z ; i++)
    {
        if(s[i]==s[i-1])
        {
            counter++;
            if(counter>=7)
            {
                dang=1;
                break;
            }

        }

        else{

            counter =1;
        }
    }
   if(dang==1)
   {
       cout<<"YES"<<endl;
   }
   else
    {
     cout<<"NO"<<endl;
    }
    return 0;
}
