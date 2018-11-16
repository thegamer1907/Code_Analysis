#include <bits/stdc++.h>

using namespace std ;  
const int N=100 ;

int main()
{
int n , t;    
scanf("%d %d",&n,&t) ;  
char queu[n] ;  
scanf("%s",&queu) ;  
while(t--){
     for (int i=1; queu[i]; i++){
            if ((queu[i-1]=='B')&&(queu[i]=='G'))
            {    
                  queu[i-1]='G' ; 
                  queu[i]='B' ; 
                  if (i!=(n-1))
                        i++ ;   
                } 
    }
    
    }
  cout<<queu ; 
 
}
