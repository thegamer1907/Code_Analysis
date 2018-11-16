#include <cstdio>  
#include <cstring>  
#include <algorithm>  
#include <climits>  
#include <cmath>  
  
using namespace std;  
  
int n,ans;  
int num[100];  
  
int my_pow(int x)  
{  
    int res = 1;  
    for(int i = 0;i < x;i++)  
        res *= 10;  
    return res;  
}  
  
int main()  
{  
    scanf("%d",&n);  
    memset(num,0,sizeof(num));  
    int a,b,len;  
    a = 0;  
    len = 0;  
    while(n){  
        b = n % 10;  
        len = max(len,b);  
        for(int i = 0;i < b;i++){  
            num[i] += my_pow(a);  
        }  
        a++;  
        n /= 10;  
    }  
    printf("%d\n",len);  
    printf("%d",num[0]);  
    for(int i = 1;i < len;i++)  
        printf(" %d",num[i]);  
    printf("\n");  
    return 0;  
} 