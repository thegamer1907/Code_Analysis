#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n , k;
    scanf("%lld %lld",&n,&k);
    map<long long,long long> left;
    map<long long,long long> right;
    long long  i , j ;
    long long ans = 0 , c;
    long long a[n+5];
    for( i = 0 ; i < n ; i++)
    {
        scanf("%lld",a+i);
        right[a[i]]++;
    }
    long long d , b ;
    for(i = 0 ; i < n ; i++)
    {
        d = 0;
        if(a[i]%k == 0)
        {
            d = left[a[i]/k];
        }
        left[a[i]]++;
        right[a[i]]--;
        b = right[a[i]*k];
        c = d*b;
        //cout << d <<"  " << b <<"  " << c << endl;
        ans += c;

    }
    printf("%lld\n",ans);

    return 0;
}
