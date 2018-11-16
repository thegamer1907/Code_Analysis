

#include<bits/stdc++.h>
using namespace std;
template< typename T>
T max(T a,T b)
{
if(a>b)
return a;
else
return b;
}
template< typename T> void scan(T &x)
{
x=0;
bool neg=0;
register T c=getchar();
if(c=='-')
neg=1,c=getchar();
while ((c < 48) || (c > 57)) 
        c = getchar(); 
  
    for ( ; c < 48||c > 57 ; c = getchar()); 
  
    for ( ; c > 47 && c < 58; c = getchar() ) 
        x=x*10+c-48;
  
    if (neg) x *= -1; 
} 

template<typename T> void print(T n) 
{ 
    bool neg = 0; 
  
    if (n < 0) 
        n *= -1, neg = 1; 
  
    char snum[65]; 
    int i = 0; 
    do
    { 
        snum[i++] = n % 10 + '0'; 
        n /= 10; 
    } 
  
    while (n); 
    --i; 
  
    if (neg) 
        putchar('-'); 
  
    while (i >= 0) 
        putchar(snum[i--]); 
  
    putchar('\n'); 
}
int dp[1500005];
int getmf()
{
int count=1,k=0;
char a=getchar(),b=getchar();
while(!(b>='0'&&b<='9'))
{
dp[count]=dp[count-1]+(b==a);
count++;
a=b;
b=getchar();
}
k=b-48;
b=getchar();
 for ( ; b > 47 && b < 58; b = getchar() ) 
        k= k*10+b-48; 
return k;
}
int length(int n)
{
int count=0;while(n){count++;n/=10;}
}
int main()
{int z=getmf();

int q,r;
while(z--)
{
scan(q);scan(r);
printf("%d\n",dp[r-1]-dp[q-1]);
}

return 0;
}