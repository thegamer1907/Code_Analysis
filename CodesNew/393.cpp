#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include<stack>
#include<map>
#include<set>
#define MAX_LENGTH 100005
#define INF 0x3f3f3f3f //1061109567
#define ll long long
using namespace std;

int main()
{
    int n,t,a[MAX_LENGTH]={0};
    while(cin >> n >> t)
    {
        int left=1,sum=0,maxa=0;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            sum+=a[i];
            while(sum>t)
            {
                sum-=a[left];
                left++;
            }
            maxa=max(maxa,i-left+1);
        }
        cout << maxa << endl;
    }
    return 0;
}

