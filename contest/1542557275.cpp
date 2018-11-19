#include<iostream>
#include<algorithm>
#include<cstdio>
#include<stdio.h>
#include<cstring>
#include<string.h>
#include<queue>
#include<stack>
#include<vector>
#include<cmath>
#include<map>
using namespace std;
const int N=1e5+10;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int mod=1e9+7;
const double eps=1e-9;
#define PI 3.1415926535
int main()
{
        int h,m,s,t1,t2;
        while(cin>>h>>m>>s>>t1>>t2)
        {
                t1=t1%12;
                t2=t2%12;
                double x=t1*30;
                double y=t2*30;
                h=h%12;
                double a,b,c;
                a=s*6.0;
                b=m*6.0+s/10.0;
                c=h*30.0+m/10.0+s/360.0;
                if(a>b)
                        swap(a,b);
                if(a>c)
                        swap(a,c);
                if(b>c)
                        swap(b,c);
                int ans1;
                if(x>=a&&x<b)
                        ans1=1;
                else if(x>=b&&x<c)
                        ans1=2;
                else
                        ans1=3;
                int ans2;
                if(y>=a&&y<b)
                        ans2=1;
                else if(y>=b&&y<c)
                        ans2=2;
                else
                        ans2=3;
                if(ans1==ans2)
                        printf("YES\n");
                else
                        printf("NO\n");
        }
        return 0;
}

		  		 		  	 			 		  			  		  	