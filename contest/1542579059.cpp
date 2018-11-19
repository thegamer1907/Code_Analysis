#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;

int two(int n)
{
    int ans=1;
    for(int i=0;i<n;i++)
    {
        ans*=2;
    }
    return ans;
}

int main()
{
    int n,k;
    int vis[17],state[4],val,found=0;
    int key[4]={1,3,7,15};

    memset(vis,0,sizeof vis);
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        val=0;
        for(int j=0;j<k;j++)
        {
            scanf("%d",&state[j]);
            val += state[j]*two(k-j-1);
        }
//        printf("%d:%d\n",i,val);
        vis[val] = 1;
    }

//
//    for(int i=0;i<16;i++)
//        printf("%d ",vis[i]);

    if(vis[0]) found =1;
    else{
        for(int i=1;i<17;i++)
        {
            if(vis[i]){
                for(int j=0;j<16;j++){

                    //printf("*%d %d\n",i,j);
                    int c = i&j;
                    //cout<<i<<" "<<j<<" "<<c<<endl;
                    if(c==0 && vis[j]) {found=1;break;}
                }
            }
            if(found) break;
        }
    }

    if(found) printf("YES\n");
    else printf("NO\n");
}
