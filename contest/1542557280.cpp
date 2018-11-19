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
        string a;
        while(cin>>a)
        {
                int n;
                scanf("%d",&n);
                string ans[N];
                for(int i=1;i<=n;i++)
                {
                        cin>>ans[i];
                        if(ans[i]==a)
                        {
                                printf("YES\n");
                                return 0;
                        }
                }
                string b;
                for(int i=1;i<=n;i++)
                {
                        for(int j=1;j<=n;j++)
                        {
                                b=ans[i]+ans[j];
                                if(b[1]==a[0]&&b[2]==a[1])
                                {
                                        printf("YES\n");
                                        return 0;
                                }
                        }
                }
                printf("NO\n");
        }
        return 0;
}

 		 		 	 	 	 	 			   			 	  		