#include<bits/stdc++.h>
using namespace std;
//#define debug(...)   printf( __VA_ARGS__ )
#define debug(...)   /****nothing****/
#define pb push_back
#define mp make_pair
#define LL long long
#define mem(arr,val) memset(arr,val,sizeof(arr))

char s1[600],s2[600],s3[4];
int n;

int main()
{
    while(cin>>s3)
    {
        cin>>n;
        bool ok1=0,ok2=0;

        for(int i=0; i<n; i++)
        {
            getchar();
            scanf("%c%c",&s1[i],&s2[i]);
            if( (s1[i]==s3[0] && s2[i]==s3[1]) || (s1[i]==s3[1] && s2[i]==s3[0]) )
            {
                ok1=ok2=1;
//                break;
            }
//
//            if(s3[0]==s2[i])
//                ok1=1;
//
//            if(s3[1]==s1[i])
//                ok2=1;

            debug("===>%c%c\n",s1[i],s2[i]);
        }

        bool ok3=0 , ok4=0;

        for(int i=0;i<n;i++)
        {
            ok3=ok4=0;

            if(s3[1]==s1[i])
                ok3=1;

            for(int j=0;j<n;j++)
                if(s3[0]==s2[j])
                {
                    ok4=1;
                    break;
                }

            if(ok4 && ok3)
             break;


        }

        if( (ok1 && ok2) || (ok4 && ok3) )
        {
            printf("YES\n");
//            continue;
        }
        else
            printf("NO\n");


//        printf((count(s1,s1+n,s3[1]) && count(s2,s2+n,s3[0]))?"YES\n":"NO\n");

    }

    return 0;
}

