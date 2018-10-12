#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k; cin>>n>>k;
    int a[n], max = -1, ans_min,ans_max;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max)max = a[i];
    }
    ans_max = max+k;
    int sum = 0;
    for(int i=0;i<n;i++)sum+=abs(a[i]-max);
    if(sum>=k)ans_min = max;
    else{
        k-=sum;
        ans_min = max+k/n;
        if(k%n != 0)ans_min++;
    }
    cout<<ans_min<<" "<<ans_max;
    return 0;
}
