#include<bits/stdc++.h>
using namespace std;
#define debug(...)   printf( __VA_ARGS__ )
//#define debug(...)   /****nothing****/
#define pb push_back
#define mp make_pair
#define LL long long
#define mem(arr,val) memset(arr,val,sizeof(arr))

double d_t1,d_t2,degree[12],h,m,s,t1,t2;

int main()
{
    while(cin>>h>>m>>s>>t1>>t2)
    {
        h = h* 10 + 1;
        m = m * 2 + 1;
        s = s * 2 + 1;
        t1 = t1* 10;
        t2 = t2* 10;
        vector<int> a = {h, m, s, t1, t2};
        sort(a.begin(),a.end());
        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] % 2 == 0 && a[(i + 1) % a.size()] % 2 == 0)
            {
                printf("YES");
                return 0;
            }
        }

        printf("NO");

    }

    return 0;
}

