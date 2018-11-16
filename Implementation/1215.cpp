#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include<algorithm>
//#define s1 "hello"
//void sort(int *s, int n);

int main()
{
    int n, t, i, j;
    char s[100];
    scanf("%d%d\n", &n, &t);
    gets(s);
    
    for(i=0; i<t; i++){
        for(j=1; s[j]; j++){
            if(s[j-1]=='B' && s[j]=='G'){
                s[j]='B';
                s[j-1]='G';
                j++;
            }
        }
    }
    puts(s);
            
            
        
    return 0;
}

/*void sort(int *s, int n)
{
    int i, k, j, max, temp;
    for(i=0; i<n-1; i++){
        max=0;
        for(j=i; j<n; j++)
            if(max<s[j]){
                max=s[j];
                k=j;
            }
        
       temp=s[k];
       s[k]=s[i];
       s[i]=temp;
   }
}
*/
        
        
        
        
        