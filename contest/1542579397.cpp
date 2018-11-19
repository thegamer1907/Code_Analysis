#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int n, k;
int problem[16];
int trans[] = {1,2,4,8,16};


inline int getBit(int n, int p)
{
    int temp = n>>p;
    return temp%2;
}


int solve(int m)
{
    if(problem[0])  return 1;
    for(int i=1;i<=m;++i)
    {
        if(problem[i])
        {
            for(int j=i+1;j<=m;++j)
            {
                if(problem[j])
                {
                    int flag=1;
                    for(int t=0;t<k;++t)
                        if(getBit(i,t)&&getBit(j,t))
                        {
                            flag=0;
                            break;
                        }
                    if(flag)     return 1;
                }
            }
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(cin>>n>>k)
    {
        memset(problem,0,sizeof(problem));
        int temp;
        for(int i=1;i<=n;++i)
        {
            temp = 0;
            for(int j=0;j<k;++j)
            {
                int a; cin>>a;
                temp += trans[j]*a;
            }
            problem[temp]++;
        }
        if(solve(trans[k]-1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

