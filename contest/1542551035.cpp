#include<bits/stdc++.h>
using namespace std;
//#define debug(...)   printf( __VA_ARGS__ )
#define debug(...)   /****nothing****/
#define pb push_back
#define mp make_pair
#define LL long long
#define mem(arr,val) memset(arr,val,sizeof(arr))

char s1[600],s2[600],s3[3];
int n;

int main()
{
    while(cin>>s3)
    {
        cin>>n;
        bool ok=0;

        for(int i=0; i<n; i++)
        {
            getchar();
            scanf("%c%c",&s1[i],&s2[i]);
            if(s1[i]==s3[0] && s2[i]==s3[1])
            {
                ok=1;
//                break;
            }
            debug("===>%c%c\n",s1[i],s2[i]);
        }

        if(ok)
        {
            printf("YES\n");
            continue;
        }


        printf((count(s1,s1+n,s3[1]) && count(s2,s2+n,s3[0]))?"YES\n":"NO\n");

    }

    return 0;
}
