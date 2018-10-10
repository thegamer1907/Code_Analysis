#include <bits/stdc++.h>

using namespace std;

const int maxn = 100000 + 5;
long long a[maxn];
long long tmp[maxn];

int main()
{
    //freopen("in.txt","r",stdin);
    int n;
    long long s;
    scanf("%d%I64d",&n,&s);

    for(int i=0;i<n;i++) {
        scanf("%I64d",&a[i]);
    }

    long long sum;
    long long ans = 0;
    int l = 0,r= n;
    int ansl;
    while(l<=r) {
        int mid = (r+l)/2;
        for(long long i=0;i<n;i++)
            tmp[i] = a[i]+(i+1)*mid;

        sum = 0;
        sort(tmp,tmp+n);

        for(long long i=0;i<mid;i++)
            sum+=tmp[i];
        if(sum>s)
            r = mid-1;
        else {
            ansl = mid;
            l = mid+1;
            ans = sum;
        }
    }

    printf("%d %I64d\n",ansl,ans);

    return 0;
}