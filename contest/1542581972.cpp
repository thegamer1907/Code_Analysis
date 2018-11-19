//#include<bits/stdc++.h>
////#define LL long long
//using  namespace std;
//typedef long long LL;
//int main()
//{
//    int a,b,c,t1,t2;
//    scanf("%d%d%d%d%d",&a,&b,&c,&t1,&t2);
//    if(t1==12) t1=0;
//    if(t2==12) t2=0;
//    t1*=5;
//    t2*=5;
//    if(a==12)
//        a=0;
//    a*=5;
//    if(t1>t2) swap(t1,t2);
//    if(((t1<=a&&t2>a)||(t1<b&&t2>b)||(t1<c&&t2>c))&&(a>=t2||b>t2||c>t2||a<t1||b<t1||c<t1))
//    {
//        printf("NO\n");
//        return 0;
//    }
//    printf("YES\n");
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int fuc[30],wo[5];
int main()
{
    int n,k;
    while(~scanf("%d%d",&n,&k))
    {
        memset(fuc,0,sizeof(fuc));
        for(int i=1; i<=n; i++)
        {
            int x,sum=0;
            for(int j=k-1; j>=0; j--)
            {
                scanf("%d",&x);
                if(x) sum+=(1<<j);
            }
            fuc[sum]=1;
        }
        int f=0;
        if(fuc[0]) f=1;
        for(int i=1; i<16&&!f; i++)
            for(int j=1; j<16&&!f; j++)
                if(i!=j&&fuc[i]&&fuc[j])
                {
                    memset(wo,0,sizeof(wo));
                    int x1=i,x2=j,kk=0;
                    while(x1)
                    {
                        wo[kk++]+=x1&1;
                        x1/=2;
                    }
                    kk=0;
                    while(x2)
                    {
                        wo[kk++]+=x2&1;
                        x2/=2;
                    }
                    if(wo[0]<2&&wo[1]<2&&wo[2]<2&&wo[3]<2)
                    {
                        f=1;
                    }
                }
        if(f) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
