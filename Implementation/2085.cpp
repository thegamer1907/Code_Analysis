#include <iostream>

using namespace std;

int main()
{
   int m , x=0, y=0 , z=0 , n ,counter=0;

   cin>>m ;

   for(int  i=0  ; i<m*3 ; i++)
   {
     cin>>n;

   if(counter==0)
   {
       x+=n;
   }
   else if(counter==1)
   {
       y+=n;
   }
   else if(counter==2)
   {
       z+=n;
   }
   counter++;

   if(counter>2)
   {
       counter=0;
   }

   }

 if(x==0&&y==0&&z==0)
  {
      cout<<"YES";
  }
  else

    cout<<"NO";

    return 0;
}
