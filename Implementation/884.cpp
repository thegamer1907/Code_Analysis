#include<bits/stdc++.h>
using namespace std; 
int main()
{
          
          int n;
          int m;
          scanf("%d",&n);
          scanf("%d",&m);
          char a[n];
          int b[n];
          int i;
        
                  scanf("%s",a);
                 
          
          int temp=0;
          
          while(temp!=m)
          {
                    int j=0;
                    for(i=0;i<n-1;i++)
                    {
                              if(a[i]=='B' && a[i+1]=='G')
                              {
                                        b[j]=i;
                                        j++;
                              }
                    }
                  
                    
                    for(i=0;i<j;i++)
                    {
                              
                              a[b[i]]='G';
                              a[b[i]+1]='B';
                              
                    }
                   
                    temp++;
          }
          
          
                  printf("%s",a);
                 
          
          
          
          
          
}
	
