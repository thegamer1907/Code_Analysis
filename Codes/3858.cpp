#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin  >> str;
    long long need[4] , have[4] , price[4] , money , i , j , k , temp  , u , v , l = str.length();
    memset(need , 0 , sizeof(need));
    for( i = 0 ; i < l ; i++)
    {
        if(str[i] == 'B')
        {
            need[1]++;
        }
        else if(str[i] == 'S')
        {
            need[2]++;
        }
        else
        {
            need[3]++;
        }
    }
    for( i = 1 ; i <= 3 ; i++)
    {
        scanf("%lld",have+i);
    }
    for( i = 1 ; i <= 3 ; i++)
    {
        scanf("%lld",price+i);
    }
    scanf("%lld",&money);
    long long cnt = 0 , lo , hi , mid , x = money , k1 , k2 , k3;
    bool a , b , c;
    lo = 0;
    hi = 1e13;
    while(lo <= hi)
    {
        mid = (lo+hi) / 2;

        k1 = k2 = k3 = 0;

        u = mid*need[1];
        v = u - have[1];
        if(v > 0)
            k1 = v*price[1];

        u = mid*need[2];
        v = u - have[2];

        if(v > 0)
            k2 = v*price[2];

        u =  mid*need[3];
        v = u - have[3];

        if(v > 0)
            k3 = v*price[3];

        x = k1 + k2 + k3;

       // cout << mid << "  " << k1 << " " << "  " << k2 << " " << k3 << endl;

        if(x <= money)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }

    }
    printf("%lld\n",lo-1);

    return 0;
}
