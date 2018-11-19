#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<climits>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<algorithm>

#define ll long long
#define dl double
#define mod 1000000007
#define sz 205
#define sz2 150

using namespace std;

int main()
{
    ll n;
    char str[5],store[sz][5];

    scanf("%s",str);
    scanf("%lld",&n);

    ll flag=0;

    for(ll i=0; i<n; i++)
    {
        scanf("%s",store[i]);

        if((str[0]==store[i][0]&&str[1]==store[i][1])||(str[0]==store[i][1]&&str[1]==store[i][0]))
        {
            flag=1;
        }
    }

    if(flag)
        printf("YES\n");

    else
    {
        ll flag=0;

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(i!=j)
                {
                    if(store[i][1]==str[0]&&store[j][0]==str[1])
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }

        if(flag)
            printf("YES\n");

        else
            printf("NO\n");
    }

    return (0);
}
