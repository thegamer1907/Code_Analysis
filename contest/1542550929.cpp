#include<bits/stdc++.h>
using namespace std;
//#define debug(...)   printf( __VA_ARGS__ )
#define debug(...)   /****nothing****/
#define pb push_back
#define mp make_pair
#define LL long long
#define mem(arr,val) memset(arr,val,sizeof(arr))

double d_t1,d_t2,degree[12],h,m,s,t1,t2;

int main()
{
    while(cin>>h>>m>>s>>t1>>t2)
    {
        if(h==12)
            h=0;

        if(t1==12)
            t1=0;

        if(t2==12)
            t2=0;

        d_t1=t1*360/12;
        d_t2=t2*360/12;

        debug("%.6f %.6f\n",d_t1,d_t2);


        degree[0]=(h*3600+m*60+s)*360/(12*3600);
        degree[1]=(m*60+s)/10;
        degree[2]=6*s;

        sort(degree,degree+3);
        for(int i=0; i<=2; i++)
            degree[i+3]=degree[i]+360;

        for(int i=0; i<6; i++)
            debug("%.6f\n",degree[i]);

        debug("\n\n");

        bool ok=0;

        for(int i=0; i<=2; i++)
        {
            if(i==2)
            {
                if(d_t1<degree[0])
                    d_t1+=360;

                if(d_t2<degree[0])
                    d_t2+=360;
            }

            debug("T1= %0.6f T2=%0.6f degre[i]=%0.6f degre[i+1]=%.6f \n",d_t1,d_t2,degree[i],degree[i+1]);


            if( d_t1>degree[i] && d_t1<degree[i+1]  && d_t2>degree[i] && d_t2<degree[i+1] )
                ok=1;

        }

        printf((ok)?"YES\n":"NO\n");



    }



    return 0;
}
/*
12 0 0 2 3

9 41 17 10 1
yes

*/
