#include<bits/stdc++.h>

using namespace std;

const long long N=1e12+7;
const int M=1e5+7;

int n,arr[107],ans,sum;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",arr+i);
        sum+=arr[i];
    }
    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            int o=0,z=0;
            for(int k=i;k<=j;++k){
                if(arr[k])++o;
                else ++z;
            }
        ans=max(ans,sum-o+z);
        }
    }
    printf("%d",ans);
    return 0;
}
