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
    int n, a1, a2, a[1000], p=1, i=0, c1=0, c0, max=0, q, c, t;
    scanf("%d", &n);
    t=n;
    scanf("%d", &a1);
    if(a1==0) a[i++]=p;
    else c1++;
    p++;
    if(n==1 && a1==0) max=1;
    n--;
    while(n--){
        scanf("%d", &a2);
        if(a2) c1++;
        if(a2==0 && n==0){
            if( a1==a2) a[i++]=p;
            else if( a1!=a2){
                a[i++]=p;
                a[i++]=p;
            }
            continue;
        }
        
            
        if(a1!=a2){
            if(a2==0) a[i++]=p;
            else a[i++]=p-1;
            p++;
        }
        else p++;
        
        a1=a2;
    }
    if(c1==t) max=c1-1;
    for(p=0; p<i; p+=2){
        c0=0;
        for(q=p+1; q<i; q+=2){
            c0+=a[q]-a[q-1]+1;
            c=c1+2*c0-(a[q]-a[p]+1);
            if(max<c) max=c;
        }
    }
    
    
    printf("%d\n", max);
    
        
    
    
        
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
        
        
        
        
        