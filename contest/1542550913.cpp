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

        degree[0]=(h*3600+m*60+s)*360/(12*3600);
        degree[1]=(m*60+s)/10;
        degree[2]=6*s;

        int cnt=0;

        if(d_t1>d_t2)
            swap(d_t1,d_t2);

        for(int i=0; i<=2; i++)
        {
            if(degree[i]>d_t1 && d_t2>degree[i] )
                cnt++;
        }

        printf((cnt>0 && cnt<3)?"NO\n":"YES\n");

    }


    return 0;
}
/*
12 0 0 2 3

9 41 17 10 1
yes

*/
