#include<stdio.h>  
#include<string.h>  
#include<math.h>  
#include<algorithm>  
using namespace std;  
int n;  
int a[511111];  
int main()  
{  
    int i,j;  
    while(~scanf("%d",&n))  
    {  
        memset(a,0,sizeof(a));  
        for(i=0;i<n;i++)  
            scanf("%d",&a[i]);  
        sort(a,a+n);  
        int ans=0;  
        i=n-1;  
        for(j=n/2-1;j>=0;j--)  
        {  
            if(a[i]>=2*a[j])  
            {  
                ans++;  
                i--;  
            }  
        }  
        printf("%d\n",n-ans);  
    }  
    return 0;  
}  
