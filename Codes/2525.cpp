#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAX_N = 1e7+9;
int vec[MAX_N];
int res[MAX_N];
bool prime[MAX_N];
int main()
{
    int N,M,T;
    memset(prime,true,sizeof(prime));
    prime[0] = prime[1] =  false;
    for(int i=2;i<MAX_N;i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<MAX_N;j+=i)
            {
                prime[j] = false;
            }
        }
    }
    while(cin>>N)
    {
        memset(vec,0,sizeof(vec));
        memset(res,0,sizeof(res));
        int temp;
        /*
        for(int i=0;i<N;i++)
        {

            scanf("%d",&temp);
            if(prime[temp])
            {
                vec[temp] ++;
                continue;
            }
            for(int j=2;j*j<=temp;j++)
            {
                if(temp%j == 0 && prime[j])
                {
                    vec[j] ++;
                    if(prime[temp/j] && temp/j!=j) vec[temp/j] ++;
                }
            }
        }
        */
        for(int i=0;i<N;i++)
        {
            scanf("%d",&temp);
            res[temp]++;
        }
        for(int i=2;i<MAX_N;i++)
        {
            if(prime[i])
            {
                vec[i] += res[i];
                for(int j=2*i;j<MAX_N;j+=i)
                {
                    vec[i] += res[j];
                }
            }
        }

        for(int i=2;i<MAX_N;i++)
        {
            vec[i] += vec[i-1];
        }
        int l,r;
        cin>>M;
        for(int i=0;i<M;i++)
        {
            scanf("%d%d",&l,&r);
            if(r>=MAX_N) r= MAX_N-1;
            if(l>=MAX_N) l= MAX_N-1;
            printf("%d\n",vec[r]-vec[l-1]);
        }
    }
    return 0;
}
