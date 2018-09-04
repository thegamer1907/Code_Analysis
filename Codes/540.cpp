///A
//#include<stdio.h>
//int main()
//{
//    int n,m;
//    while(~scanf("%d%d",&n,&m))
//    {
//        double x=100;
//        while(n--)
//        {
//            double a,b;
//            scanf("%lf%lf",&a,&b);
//            if(a/b<x)
//            {
//                x=a/b;
//            }
//        }
//        printf("%f\n",x*m);
//    }
//}

///B
#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int t=1,x=19;
        while(t!=n)
        {
            x++;
            int sum=0;
            int y=x;
            while(y)
            {
                sum+=y%10;
                y/=10;
            }
            if(sum==10)
                t++;
        }
        printf("%d\n",x);
    }
}
