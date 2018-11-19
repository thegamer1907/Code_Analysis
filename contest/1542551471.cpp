#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    char a , b, x,y,y1;
    char m[2],bac[2];
    cin>>a>>b;
    int n,d=0,flag=1 ,sub=0,loop=1;
    cin>>n;

    for(int i = 0 ; i<n;i++)
    {
                cin>>x;

              if (x==b)
              {m[1]=x;
              }


        cin>>y;
        y1=y;
        if (x==a && y1==b)
        {
            bac[0]=x;
            bac[1]=y;
        }


              if (y==a)
              {
                       m[0]=y;
              }

    }
m[2]='\0';



  if (n==1)
  {
//cout<<a<<b<<endl;
//cout<<x<<endl;
//cout<<y1<<endl;

      if (a==x && b==y1)
      {
           cout<< "YES\n";
           flag=0;
           return 0 ;
      }


  }
  //for(int i =0 ; i<2;i++)cout<<m[i];

        if (m[0]==a && m[1]==b  )
        {
            cout<< "YES\n";
            flag=0;
            return 0 ;

        }

         if (bac[0]==a && bac[1]==b  )
        {
            cout<< "YES\n";
            flag=0;
            return 0 ;

        }




    if(flag==1)
        cout<< "NO\n";
    return 0 ;
}
