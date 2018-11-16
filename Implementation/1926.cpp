#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,c,d,e,f,g,h;
   while(cin>>a)
   {

    b=c=d=0;
    for(e=1;e<=a;e++)
    {
        cin>>f>>g>>h;
        b+=f;
        c+=g;
        d+=h;
    }
    if(b==0&&c==0&&d==0)
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
