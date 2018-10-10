#include <bits/stdc++.h>
using namespace std;
const int P = 10000005;
const int N = 1000005;
int nums[N], freq[P];
int prime[P];
int numprime[P];
int prefixprime[P]; 
void SIEVE ()
{
    int i, j, k, l;
    for( i = 2 ; i < P ; i++)
    {
        if(!prime[i])
         {
            for ( j = i ; j < P ; j = j + i)
            {
                prime[j] = i;
                numprime[i] += freq[j];
            }
         }
    }
    return ;
}


void prefixprimefunc ()
{
    int i;
    prefixprime[0] = numprime[0];
    for ( i = 1 ; i < P ;i++)
      prefixprime[i] = prefixprime[i - 1] + numprime[i];
    return ;
}

int main()
{
    int n , i, j , k , q, x;
    
    scanf("%d",&n);
    for ( i = 1 ; i <= n; i++)
     {
        scanf("%d",&x);
        nums[i] = x;
        freq[x]++;
        //factorise(x);
     }
     SIEVE();
     
    /*for ( i = 0 ; i < P ;i++)
       cout << i << " : " << numprime[i] << " ";
    cout << endl;*/
    
    prefixprimefunc();
    
     int left , right;
     scanf("%d",&q);
     while(q--)
     {
        scanf("%d%d",&left , &right) ;
        if( left > 10000000)
          printf("0\n");
        else
        {
           right = min( right , 10000000);
		   printf("%d\n",prefixprime[right] - prefixprime[left - 1]);
	    }
     }
    
    return 0;
}