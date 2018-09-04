#include<bits/stdc++.h>
using namespace std;
int ans[10010];
void init()
{
    int num=0;
    int now=19;
    while(num<10000)
    {
        int sum=0;
        int next=now;
        while(now>0)
        {
            sum=sum+now%10;
            now=now/10;
        }
        //cout<<sum<<" "<<num<<endl;
        if(sum==10) ans[num++]=next;
        now=next+1;
    }
}
int main()
{
    init();
    int k;
    while(~scanf("%d",&k))
        cout<<ans[k-1]<<endl;

}
