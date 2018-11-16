#include <bits/stdc++.h>

using namespace std ;  
const int N=100 ;
int b[N],g [N] ; 
int main()
{
int n , t;    
scanf("%d %d",&n,&t) ;  
char queu[n] ;  
scanf("%s",&queu) ;  
while(t--){
     int cn=0 ;  
     for (int i=1; queu[i]; i++){
            if ((queu[i-1]=='B')&&(queu[i]=='G'))
            {    
                b[cn]=(i-1) ;  
                g[cn]=i ;  
                cn++ ;  
                } 
    }
    for (int i=0 ;  i<cn ;  i++)
    {
        queu[b[i]]='G'; 
        queu[g[i]]='B'; 
        }
    }
  cout<<queu ; 
 
}
