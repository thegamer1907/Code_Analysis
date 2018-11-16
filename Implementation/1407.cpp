#include<bits/stdc++.h>
using namespace std;

int main()
{  int n,t,i;
   scanf("%d %d",&n,&t) ;	
   char str[n] ;
   scanf("%s",str) ;
   while(t--)  
   { for (i = 0; i < n-1 ; ++i)
     { if((str[i]=='B')&&(str[i+1]=='G')) 
   	   { char ch ;
   	   	 ch=str[i] ;
   	   	 str[i]=str[i+1] ; 
         str[i+1]=ch ;
         i++ ;
   	   }
     }
   }
   printf("%s",str) ;
   cout<<"\n" ; 
   return 0;

}   	