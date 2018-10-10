#include <bits/stdc++.h>
#define ll long long
#define MAX 1000005

using namespace std;

char str[MAX];

ll len;

ll z[MAX];

void z_algo(char *str)
{
    ll n = strlen(str);
    ll i,l,r;
    for(i=1,l= 0, r = 0; i < n; ++i)
    {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && str[z[i]] == str[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
}

int main()
{
    scanf("%s",str);
    ll i,j;
    ll len = strlen(str);
    z_algo(str);
    ll flag = 0;
    ll mx = 0;
    ll idx;
    ll cnt = 2;
    for(i=0;i<len;i++)
    {
        if(z[i] + i == len&&mx >= z[i])
        {
            flag = 1;
            idx = i;
            break;
        }
        mx = max(mx,z[i]);
    }
    if(!flag)
        cout<<"Just a legend"<<endl;
    else
    {
        for(i=idx;i<len;i++)
            cout<<str[i];
    }
    return 0;
}
