#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,j=0,temp=0;
    string c;
    cin>>c;
    cin>>n;
    string a;
    char pas[4];
    for(i=0;i<n;i++)
    {
        cin>>a;
          if((a[0]==c[0]&&a[1]==c[1])||(a[0]==c[1]&&a[1]==c[0]))
            {


                cout<<"YES";
                return 0;
            }
           if(a[1]==c[0]&&temp==0)
           {
               temp=1;
           }
           if(a[0]==c[1]&&j==0)
           {
               j=1;
           }
           if(temp==1&&j==1)
           {

               cout<<"YES";
               return 0;
           }




    }
    cout<<"NO";


    return 0;
}
