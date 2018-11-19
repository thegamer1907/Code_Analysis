#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
#define ll long long
int h,m,s,s1,s2;
int n,k;
int a[5][100005];
int b[100005];
map<int,int> mp;
int main()
{
    scanf("%d %d",&n,&k);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
            scanf("%d",&a[j][i]);
        int zha=1;
        b[i]=0;
        for(int j=k; j>=1; j--)
        {
            b[i]+=a[j][i]*zha;
            zha*=2;
        }
        //cout<<b[i]<<endl;
        mp[b[i]]=1;
    }
    if(n==1)
    {
        if(b[1]==0)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
        return 0;
    }
    for(int i=1; i<=n; i++)
    {
        int q[5];
        for(int j=k; j>=1; j--)
        {
            if(a[j][i]==1)
                q[j]=0;
            else
                q[j]=1;
        }
        for(int w1=0; w1<=q[k]; w1++)
        {
            if(k-1>0)
            {
                for(int w2=0; w2<=q[k-1]; w2++)
                {
                    if(k-2>0)
                    {
                        for(int w3=0; w3<=q[k-2]; w3++)
                        {
                            if(k-3>0)
                            {
                                for(int w4=0; w4<=q[k-3]; w4++)
                                {
                                    if(mp[w1+w2*2+w3*4+w4*8]==1)
                                    {
                                        printf("YES\n");
                                        return 0;
                                    }
                                }
                            }
                            else
                            {
                                if(mp[w1+w2*2+w3*4]==1)
                                {
                                    printf("YES\n");
                                    //cout<<"####"<<i<<" "<<w1<<" "<<w2<<" "<<w3<<endl;

                                    return 0;
                                }
                            }
                        }
                    }
                    else
                    {
                        if(mp[w1+w2*2]==1)
                        {
                            printf("YES\n");
                            return 0;
                        }
                    }
                }
            }
            else
            {
                if(mp[w1]==1)
                {
                    printf("YES\n");
                    return 0;
                }
            }
        }
    }
    printf("NO\n");
    return 0;
}
