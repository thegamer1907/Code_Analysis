#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
static const int INF = 0x3f3f3f3f;
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;


    int main()
    {
        int A[20];
        for(int i=0;i<20;++i)
            A[i] = 0;
        int n,K;
        scanf("%d %d",&n,&K);
        for(int i=0;i<n;++i)
        {
            int r = 1,temp = 0;
            for(int j=0;j<K;++j)
            {
                int a;
                scanf("%d",&a);
                temp += r*a;
                r = 2*r;
            }
            A[temp] = 1;
          //  printf("%d\n",temp);
        }
        if( A[0] == 1)
        {

            printf("yes\n");
            return 0;
        }
        if( K >= 2)
        {
            for(int i=1;i<16;++i)
            {
                for(int j=1;j<16;++j)
                {
                    if( A[i] == 1 && A[j] == 1 && (i&j) == 0)
                    {
                        printf("yes\n");
                        return 0;
                    }
                }
            }
        }
        if( K >= 3)
        {
            for(int i=1;i<16;++i)
            {
                for(int j=1;j<16;++j)
                {
                    for(int k=1;k<16;++k)
                    {
                        if( A[i] == 1 && A[j] == 1 && A[k] == 1 )
                        {
                            int B[4] ;
                            for(int z = 0;z<4;++z)
                                    B[z] = 0;
                            for(int z=0;z<4;++z)
                            {
                                if( i&(1<<z) )
                                    B[z]++;
                                if( j&(1<<z))
                                    B[z]++;
                                if( k&(1<<z))
                                    B[z]++;
                            }
                            if( B[0] <= 1 && B[1] <= 1 && B[2]<= 1 && B[3] <= 1)
                            {
                                    printf("yes\n");
                                    return 0;
                            }
                        }
                    }
                }
            }
        }
        if( K >= 4)
        {
            for(int i=1;i<16;++i)
            {
                for(int j=1;j<16;++j)
                {
                    for(int k=1;k<16;++k)
                    {
                        for(int l=1;l<16;++l)
                        {
                            if( A[i] == 1 && A[j] == 1 && A[k] == 1 && A[l] == 1 )
                            {
                                int B[4] ;
                            for(int z = 0;z<4;++z)
                                    B[z] = 0;
                            for(int z=0;z<4;++z)
                            {
                                if( i&(1<<z) )
                                    B[z]++;
                                if( j&(1<<z))
                                    B[z]++;
                                if( k&(1<<z))
                                    B[z]++;
                                if( l&(1<<z))
                                    B[z]++;
                            }
                            if( B[0] <= 2 && B[1] <= 2 && B[2]<= 2 && B[3] <= 2)
                            {
                                    printf("yes\n");
                                    return 0;
                            }
                            }
                        }
                    }
                }
            }
        }
        printf("no\n");
        return 0;
    }
