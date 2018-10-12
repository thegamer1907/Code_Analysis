
#include <bits/stdc++.h>
using namespace std;

int main()
{
 
int n;
long long t;
 cin>>n>>t;
 long long arr[n];
 for(int i = 0; i  < n; i++)
     cin>>arr[i];
 int   result = 0;
 int j = 0;
 int i ;
 long long sum = 0;
for( i = 0; i  < n; i++)
     {
       sum += arr[i];
       if(sum > t)
       { result = max(result, i - j);
       while(sum > t && j < n)
         {
            sum  -= arr[j];
            j++;
         }
       }
     }
     if(sum <= t)
     {
        result = max(result, i - j);

     }
     cout<<result<<endl;
     return 0;
}


