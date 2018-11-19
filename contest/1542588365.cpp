#include<bits/stdc++.h>
//scanf
#define ins(a) scanf("%s", a)
#define ini(a) scanf("%d",&a)
#define in(a) scanf("%lld", &a)
//datatype
#define ll long long
//print
#define out(a) printf("%lld\n", a)
#define f(i,j) for(i=0; i<j; i++)
#define pi 3.141592653589793
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string a[110], s;
    int t;
    cin>>s;
    cin>>t;
    bool f=0;
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
        if(a[i]==s)
            f=1;
    }
    if(f)
    {
        printf("YES\n");
        return 0;
    }
    for(int i=0; i<t; i++)
    {
        for(int k=0; k<2; k++)
        {
            for(int j=0; j<t; j++)
            {
                    if(k==0)
                    {
                        if(a[i][k]==s[1] && a[j][1]==s[0])
                        {
                            printf("YES\n");
                            return 0;
                        }
                    }
                    else
                    {
                        if(a[i][k]==s[0] && a[j][0]==s[1])
                        {
                            printf("YES\n");
                            return 0;
                        }
                    }
            }
        }
    }
    printf("NO\n");
    return 0;
}
